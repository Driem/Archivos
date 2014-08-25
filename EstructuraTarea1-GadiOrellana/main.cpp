// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
using namespace std;


//devuelve el primer elemento de "mi_cola"
string getPrimerElemento(queue<string> mi_cola)
{
    //.front es una funcion de la libreria queue que retorna el primer elemento de la cola
    return mi_cola.front();
}

//devuelve la cantidad de elementos de "mi_cola"
int getTamano(queue<string> mi_cola)
{
//.front es una funcion de la libreria queue que retorna la cantidad de elementos de la cola
    return mi_cola.size();
}

//devuelve true si "str" esta dentro de "mi_cola" de lo contrario devuelve false
bool existeEnCola(queue<string> mi_cola, string str)
{
    // se inicializa el ciclo y se detendra cuando la cola esta vacia
while(!mi_cola.empty()){
    //compara el primer elemento de la cola con la cadena a comparar
    if(mi_cola.front() == str)
        return true;
        mi_cola.pop();
    }
    // si no se encontro la palabra sale del ciclo y retorna que es falso
return false;

}

//devuelve el elemento mayor de "mi_cola"
int getMayor(queue<int> mi_cola)
{
    // se declara un temporal con el primer elemento de la cola
    int temp = mi_cola.front();
 //compara el primer elemento de la cola con la cadena a comparar
   while(!mi_cola.empty()){
// compara si el el primer elemento de la cola  es mayor al temporal que tiene el elemento mas alto
        if(mi_cola.front()>temp)
            //si el elemento a comparar es mas alto que el del temporal entonces el temporal toma el valor del elemento
            temp = mi_cola.front();

        mi_cola.pop();

    }
//Al terminar el ciclo retorna el elemento mas alto de la cola
    return temp;
}

//devuelve el elemento menor de "mi_cola"
int getMenor(queue<int> mi_cola)
{
    // se declara un temporal con el primer elemento de la cola
   int temp = mi_cola.front();
// se inicializa el ciclo y se detendra cuando la cola esta vacia
   while(!mi_cola.empty()){
// compara si el el primer elemento de la cola  es menor al temporal que tiene el elemento mas bajo
        if(mi_cola.front() < temp)
            temp = mi_cola.front();
// elimina primer elemento de la cola
        mi_cola.pop();

    }
//DEvuelve el elemento mas pequeño de la  cola
    return temp;
}

//devuelve el promedio de todos los elementos de "mi_cola"
float getPromedio(queue<float> mi_cola)
{
    // se declara e inicializa una variable temporal  se inicializa para que cuando entre al ciclo no tenga valores basura
     float temp = 0.0;
     // se declara una variable con el tamaño de la cola
     int i = mi_cola.size();

   while(!mi_cola.empty()){
        // la variable ya declarada se suma su valor actual + el valor
        temp = temp + mi_cola.front();

        mi_cola.pop();

    }
//Retorna el resultado de la suma de todos los elementos de la cola entre su tamaño = devuelve el promedio
    return temp / i ;



    //return -1.0f;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
