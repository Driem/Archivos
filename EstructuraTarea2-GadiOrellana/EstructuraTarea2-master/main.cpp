// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::queue
#include <list>          // std::list
using namespace std;


//devuelve true si todos los elementos de la pila son pares, de lo contrario devuelve false
bool sonPares(stack<int> mi_pila)
{
    //El ciclo se detiene cuando la pila este vacia
    while(!mi_pila.empty()){
            //la condicion evalua si elemento cuando es dividido por 2 su residuo es 0
        if(mi_pila.top() % 2 == 0){
            //Se elimina el elemento de la pila
            mi_pila.pop();
        }else{
        return false;
        }
        }
    //el true esta fuera del ciclo por que si dentro del ciclo no se cumple la condicion de que no es par  entonces cuando salga del ciclo no existe otra opcion de que sea verdadera
    return true;
}

//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{
    //Se declara el iterador
    list<int>:: iterator i = mi_lista.begin();
    //Se declara el ciclo con itrador
   for(i = mi_lista.begin(); i != mi_lista.end();i++){
     //la condicion evalua si elemento cuando es dividido por 2 su residuo es 0
        if(*i % 2 != 0)
            return false;
    }
    //el true esta fuera del ciclo por que si dentro del ciclo no se cumple la condicion de que no es par  entonces cuando salga del ciclo no existe otra opcion de que sea verdadera
        return true;
}
//devuelve true si str es un elemento de mi_pila, de lo contrario devuelve false
bool existe(stack<string> mi_pila, string str)
{
    //El ciclo se detiene cuando la pila este vacia
    while(!mi_pila.empty()){
            // La condicion verifica si el top o final de la pila es igual a la cadena a ingresar
        if(mi_pila.top() == str)
            return true;
            mi_pila.pop();

        }
    // Si termina el ciclo y la cadena no es igual a ninguna de las que esta en la cola entonces retorna false
        return false;

}

//devuelve true si str es un elemento de mi_pila, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{
    // se declara el iterador
    list<string>:: iterator i = mi_lista.begin();
    //Se declara el ciclo con itrador
   for(i = mi_lista.begin(); i != mi_lista.end();i++){
        // La condicion verifica si el iterador  de la lista es igual a la cadena a ingresar
        if(*i == str)
            return true;
}
        return false;
}

//devuelve la suma de los elementos de la cola
int getSuma(stack<int> mi_pila)
{
    // Se inicializa el temporal en 0 para no tener problemas en el ciclo
    int temp = 0;
    // el ciclo se detiene cuando Pila este vacia
     while(!mi_pila.empty()){
            //aqui es donde se hace la suma de los elementos
        temp = temp + mi_pila.top();
     // Se borra elemento de la pila
        mi_pila.pop();

    }
    //Retorna temp que tiene el resultado de la suma
    return temp;
}

//devuelve la suma de los elementos de la lista
int getSuma(list<int> mi_lista)
{
    // se inicializa el temp en 0 para no tener problemas en el ciclo
    int temp = 0;
    // se declara el iterador
   list<int>:: iterator i = mi_lista.begin();
   for(i = mi_lista.begin(); i != mi_lista.end();i++){
        // se suma la temporal mas el elemento donde esta el iterador
        temp += *i;
}
//retorna la suma ya echa
return temp;
}

//Devuelve true si los elementos de la lista son palindromos, de lo contrario devuelve false
bool esPalindroma(list<char>mi_lista)
{
//se declara una segunda lista
list<char> mi_lista2;
// se igualan las listas
mi_lista2 = mi_lista;
// la condicion para que se detenga el ciclo es si una de las 2 llega a estar vacia
 while(!mi_lista.empty() && !mi_lista2.empty()){
        // esta condicion evalua si son iguales al ser palabras palindromas tienen que tener la misma longitud
        if(mi_lista.front() != mi_lista2.back() )
        return false;
            // elimina el ultimo elemento
        mi_lista2.pop_back();
          //elimina el primero
        mi_lista.pop_front();
    }
//Evalua si tienen el mismo tamaño de ser asi
    if(mi_lista.size() != mi_lista2.size())
     return false;
// de pasar todas ls condiciones significa que la palabra si es palindroma
     return true;

}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
