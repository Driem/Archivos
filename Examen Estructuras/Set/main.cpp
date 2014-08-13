#include <iostream>

using namespace std;

class Nodo{

      public:
      int valor;
      Nodo *sigPtr;

      Nodo(int n)
      {
            valor = n;
            sigPtr =0;
      }


};


class Set{

      private:
              Nodo *primeroPtr;
              Nodo *ultimoPtr;

      public:
             Set()
             {
                primeroPtr =  ultimoPtr =0;
             }


             bool IsEmpty()
             {
                  return primeroPtr == 0;
             }

             void Insertar(int val)
             {

                  Nodo *Temp = primeroPtr;
                  if(IsEmpty())
                  {
                    Nodo *auxPtr = new Nodo(val);
                    primeroPtr = ultimoPtr = auxPtr;
                  }
                  else
                  {
                 while(Temp !=0 )
                 {
                     if(val == Temp->valor)
                        return;

                        Temp = Temp->sigPtr;

                 }
                      Nodo *auxPtr = new Nodo(val);
                      ultimoPtr->sigPtr = auxPtr;
                      ultimoPtr = auxPtr;
                  }
             }


            friend ostream &operator<<( ostream &os, Set &s)
            {
                   Nodo *auxPtr = s.primeroPtr;
                 while(auxPtr !=0 )
                 {
                      os<<auxPtr->valor<<" -> ";
                      auxPtr = auxPtr->sigPtr;

                 }
                 cout<<endl;
                 return os;
            }


             void InsertAtBack(int val)
             {
                  Nodo *aux = new Nodo(val);
                  if(IsEmpty())
                  {
                    primeroPtr = ultimoPtr = aux;
                  }
                  else
                  {
                      aux->sigPtr = primeroPtr;
                      primeroPtr = aux;
                  }
             }

             void deleteFromBack()
             {

                  if(IsEmpty())
                   return;
                  Nodo *auxPtr = primeroPtr;

                  if(primeroPtr==ultimoPtr)
                    ultimoPtr = 0;

                  primeroPtr = primeroPtr->sigPtr;
                  delete auxPtr;

             }


             void deleteFromFront()
             {
                  if(IsEmpty())
                    return;
                  Nodo *auxPtr = primeroPtr;
                  if(primeroPtr == ultimoPtr)
                  {
                    delete ultimoPtr;
                    ultimoPtr = primeroPtr  = 0;
                  }
                  while(auxPtr->sigPtr!=ultimoPtr)
                    {
                      auxPtr = auxPtr->sigPtr;
                    }

                  delete ultimoPtr;
                  ultimoPtr = auxPtr;
                  ultimoPtr->sigPtr =0;
             }

             void Vaciar()
             {
                while(!IsEmpty())
                deleteFromBack();

             }

             int operator[](int indice)
             {
                  Nodo *auxPtr = primeroPtr;
                  for(int i=0;i<indice;i++)
                   {
                     if(auxPtr->sigPtr == 0)
                      { cerr<<"error de indice no existe posicion"<<indice<<endl;
                         return 0;
                      }
                     else
                       auxPtr= auxPtr->sigPtr;
                   }

                   return auxPtr->valor;

             }
      };

 int main()
 {
   Set s = Set();
   s.Insertar(2);
   s.Insertar(2);
   s.Insertar(8);
   s.Insertar(6);
   s.Insertar(5);
   s.Insertar(2);
 //  l.deleteFromFront();
  // l.deleteFromFront();
   //l.Vaciar();
  // cout<<l[10]<<endl;
   cout<<s;
   cout<<s.IsEmpty()<<endl;

     return 0;
 }


