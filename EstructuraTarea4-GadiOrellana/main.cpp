#include "NodoArbolBinario.h"
#include "NodoArbolNArio.h"
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <list>          // std::list
using namespace std;



int suma(NodoArbolBinario* raiz)
{
    int aux = 0;// Se crea una variable auxiliar y se inicializa en 0 para que no de un valor nullo
    if(raiz == NULL)//Verifica si la raiz no esta vacia
        return 0;// Si esta vacia retorna 0

     aux += raiz->num; // se suma el auxiliar mas el numero que esta en la raiz

return aux += suma(raiz->hijo_izq) + suma(raiz->hijo_der); //al final retorna la suma final del valor de la suma de las hojas de los arboles


}

int suma(NodoArbolNArio* raiz)
{
    int aux = 0;// Se crea una variable auxiliar y se inicializa en 0 para que no de un valor nullo
    if(raiz == NULL)//Verifica si la raiz no esta vacia
        return 0; // Si esta vacia retorna 0

     aux += raiz->num; // se suma el auxiliar mas el numero que esta en la raiz

     for(list<NodoArbolNArio*>::iterator i = raiz->hijos.begin(); i!=raiz->hijos.end(); i++)// se declara un ciclo con iterador como lo haciamos con las listas que empieza en la raiz del arbol y termina cuando cuando ya no se este apuntando a ningun valor = la hoja esta vacia
            aux +=suma(*i);//Se usa la suma del auxiliar mas lo que retorna la funcion recursiva
            return aux;//Cuando termina el ciclo se sale y retorna la suma total de las hojas del arbol
}

int cantidadNodos(NodoArbolBinario* raiz)
{
     int cont = 0;// Se crea una variable contador y se inicializa en 0 para que no de un valor nullo
    if(raiz == NULL) //Verifica si la raiz no esta vacia
        return 0;// Si esta vacia retorna 0
        cont++;// si al valor no es nullo contador aumenta a uno por que se cuenta como raiz

return cont += cantidadNodos(raiz->hijo_izq) + cantidadNodos(raiz->hijo_der);// al final la funcion retorna la contidad de nodos usando la recurvidad sumando la raiz y la sumatoria de la cantidad de hijos izquierdo y derecho del arbol
}

int cantidadNodos(NodoArbolNArio* raiz)
{
    int cont = 0;// Se crea una variable contador y se inicializa en 0 para que no de un valor nullo
    if(raiz == NULL)//Verifica si la raiz no esta vacia
        return 0;// Si esta vacia retorna 0

     cont++;// si al valor no es nullo contador aumenta a uno por que se cuenta como raiz

     for(list<NodoArbolNArio*>::iterator i = raiz->hijos.begin(); i!=raiz->hijos.end(); i++)// se declara un ciclo con iterador como lo haciamos con las listas que empieza en la raiz del arbol y termina cuando cuando ya no se este apuntando a ningun valor = la hoja esta vacia
            cont +=cantidadNodos(*i);// se suma usando la recursividad la cantidad de hojas que tiene el arbol
            return cont;// cuando el ciclo termina
}

int promedio(NodoArbolBinario* raiz)
{
    return suma(raiz)/cantidadNodos(raiz);//Aprovechando  las funciones anteriormente declaradas solo dividi la suma total entre la suma de los elementos sin nesecidad de variable por que retorna de un solo el valor
}

int promedio(NodoArbolNArio* raiz)
{
    return suma(raiz)/cantidadNodos(raiz););//Hize lo mismo que en el anterior aprovechando las funciones sobrecargadas
}

int main ()
{
    // lo hize de esta manera por que es la forma que vi mas eficiente
    //Funcion evaluadora
    evaluar();
    return 1;
}
