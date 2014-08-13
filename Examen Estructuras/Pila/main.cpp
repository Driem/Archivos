#include <iostream>
#include <list>
using namespace std;

class Nodo
{
public:
    int dato;
    Nodo *sigPtr;

    Nodo(int n)
    {
        dato = n;
        sigPtr =0;
    }

};

class Pila
{
public:

    Nodo *TopePtr;

    Pila()
    {
        TopePtr = 0;
    }

    bool IsEmpty()
    {
        return TopePtr ==0;
    }

    void Push(int dato)
    {
        Nodo *auxPtr = new Nodo(dato);
        auxPtr->sigPtr = TopePtr;
        TopePtr = auxPtr;
    }

    void Pop()
    {
        //Elimina un Elemento del Tope
         Nodo *auxPtr = TopePtr;

        if(!IsEmpty())
            {
                TopePtr = TopePtr->sigPtr;
          //      int num = auxPtr-> dato;
                delete auxPtr;
        //        return num;
            }
    }

    int Top()
    { //Devuelve el dato del Tope
        if(IsEmpty()==false)
            {
             return  TopePtr->dato;
             }
        else
            {
            return -1;
            }
    }

    friend ostream &operator<<( ostream &os, Pila &p)
     {
		  Nodo *auxPtr = p.TopePtr;

		  while(auxPtr!=0)
            {
                os<<auxPtr->dato<<"->";
                auxPtr = auxPtr->sigPtr;
            }
		  return os;
		}

		int GetNumeroMayor(){
		Nodo *auxPtr = TopePtr;
            int Mayor = auxPtr->dato;
		  while(auxPtr!=0)
            {
                if(Mayor < auxPtr->dato)
                    Mayor = auxPtr->dato;
                auxPtr = auxPtr->sigPtr;
            }
                return Mayor;
		}

        int Size(){
        Nodo *auxPtr = TopePtr;
        int tam = 0;
		  while(auxPtr!=0)
            {
                tam = 1+tam;
                auxPtr = auxPtr->sigPtr;
            }
                return tam;

        }

        double Promedio(){
        Nodo *auxPtr = TopePtr;
        double Prom = 0;
		  while(auxPtr!=0)
            {
                Prom = Prom + auxPtr->dato;
                auxPtr = auxPtr->sigPtr;
            }
                return Prom/ Size();
        }

std :: list <int> ConvertirALista(){
    Nodo *auxPtr = TopePtr;
    list<int> Lista;

    while(auxPtr!=0)
            {
                Lista.push_front(auxPtr->dato);
                auxPtr = auxPtr->sigPtr;
            }
        return Lista;

}


};


int main()
{
    list<int> Lista;
    Pila p = Pila();
    p.Push(8);
    p.Push(20);
    p.Push(55);
    p.Push(15);
    p.Push(30);
    cout<<p <<endl;
    cout<<p.GetNumeroMayor()<<endl;
    cout<<p.Size()<<endl;
    cout<<p.Promedio()<<endl;
    p.Pop();
    cout<<p<<endl;

    Lista = p.ConvertirALista();

    list<int>:: iterator i = Lista.begin();
   for(i = Lista.begin(); i != Lista.end();i++){
    cout<<*i<<"->";
   }

    return 0;
}


