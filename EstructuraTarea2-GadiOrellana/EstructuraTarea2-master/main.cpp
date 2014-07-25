// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::queue
#include <list>          // std::list
using namespace std;


//devuelve true si todos los elementos de la pila son pares, de lo contrario devuelve false
bool sonPares(stack<int> mi_pila)
{
    while(!mi_pila.empty()){
        if(mi_pila.top() % 2 == 0){
            mi_pila.pop();
        }else{
        return false;
        }
        }
    return true;
}

//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{
    list<int>:: iterator i = mi_lista.begin();
   for(i = mi_lista.begin(); i != mi_lista.end();i++){
        if(*i % 2 != 0)
            return false;
}
        return true;
}
//devuelve true si str es un elemento de mi_pila, de lo contrario devuelve false
bool existe(stack<string> mi_pila, string str)
{
    while(!mi_pila.empty()){
        if(mi_pila.top() == str)
            return true;
            mi_pila.pop();

        }
        return false;

}

//devuelve true si str es un elemento de mi_pila, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{
    list<string>:: iterator i = mi_lista.begin();
   for(i = mi_lista.begin(); i != mi_lista.end();i++){
        if(*i == str)
            return true;
}
        return false;
}

//devuelve la suma de los elementos de la cola
int getSuma(stack<int> mi_pila)
{
    int temp = 0;
     while(!mi_pila.empty()){
        temp = temp + mi_pila.top();
        mi_pila.pop();

    }
    return temp;
}

//devuelve la suma de los elementos de la lista
int getSuma(list<int> mi_lista)
{
    int temp = 0;
   list<int>:: iterator i = mi_lista.begin();
   for(i = mi_lista.begin(); i != mi_lista.end();i++){
        temp += *i;
}
return temp;
}

//Devuelve true si los elementos de la lista son palindromos, de lo contrario devuelve false
bool esPalindroma(list<char>mi_lista)
{
list<char> mi_lista2;
mi_lista2 = mi_lista;
 while(!mi_lista.empty() && !mi_lista2.empty()){

        if(mi_lista.front() != mi_lista2.back() )
        return false;

        mi_lista2.pop_back();
        mi_lista.pop_front();
    }

    if(mi_lista.size() != mi_lista2.size())
     return false;

     return true;

}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
