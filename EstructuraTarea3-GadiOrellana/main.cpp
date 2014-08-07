#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list
#include <map>          // std::list
using namespace std;


//agrega 'valor' a 'mi_set'
void agregarASet(set<int> *mi_set,int valor)
{
    //insert(); es una funcion de la libreria "set" que inserta como su nombre lo indica un valor al set, y se usa -> por que mi set es declaro apuntador.
    mi_set->insert(valor);

}

//agrega 'valor' a 'mi_map' usando la 'llave' como llave
void agregarMap(map<string, int> *mi_map, string llave, int valor){
// insert(); es un funcion de la libreria <map> que inserta como su nombre lo indica un valor al set, y se usa -> por que mi set es declaro apuntador.

        mi_map -> insert(pair<string,int>(llave,valor));

}

//devuelve cuantos elementos de 'mi_multiset' tienen un valor de 'valor'
int contarElementosMultiset(multiset<int> mi_multiset,int valor)
{
 // count(); es un funcion de la libreria <set> que devuelve la cantidad de veces que el valor o la variable que pongamos como parametro;
    return mi_multiset.count(valor);
}

//devuelve cuantos elementos de 'mi_multimap' usan 'llave' como llave
int contarElementosMultimap(multimap<string,int> mi_multimap,string llave)
{
  // count(); es un funcion de la libreria <map> que devuelve la cantidad de veces que la llave o la variable que pongamos como parametro;
    return mi_multimap.count(llave);
}

//devuelve la suma de los elementos de 'mi_multiset' que usan 'llave' como llave
int sumaElementosMultiset(multiset<int> mi_multiset, int valor)
{
    // se declara el iterador
    multiset<int>::iterator it;
    // se le da, al iterador el valor de valor valga la redundacia con la funcion find(); que busca la variable que se le ponga como parametro en el set.
    it = mi_multiset.find(valor);
    // retorna la suma de los elementos en el multiset multiplicando el valor de valor con el numero de veces que aparece en el multiset.
    return  *it * mi_multiset.count(valor);
}

//devuelve la suma de los elementos de 'mi_multimap' que usan 'llave' como llave
int sumaElementosMultimap(multimap<string, int> mi_multimap, string llave)
{

    int cont = 0;
//El ciclo se detendra hasta que ya no se encuentre ninguna vez en el multimap la variable "LLave".
   while(mi_multimap.count(llave) != 0)
        {
// se iguala c a la posicion donde esta guardada la variable llave o viseversa (No se cual es la que se cual es el indice o el contenido lo que entiendo que en este caso llave es el contenido)
           int c = mi_multimap.find(llave)-> second;
            // se suma el contador con la posicion.
            cont = cont + c;
        // se borra la posicion usando el erase() que toma como parametro lo que se quiere borrar.
            mi_multimap.erase(mi_multimap.find(llave));
        }
       // retorna contador
    return cont;


}



//el promedio de todos los elementos que tiene 'mi_multiset' (incluyendo valores repetidos)
int promedioElementosMultiset(multiset<int>mi_multiset)
{
    // tam se inicializa con el tamano del multiset
    int tam = mi_multiset.size();
    int prom = 0;
    int aux = 0;
    // se declara el iterador
    multiset<int>::iterator i;
    //se inicializa el ciclo con el principio del multiset hasta que llegue a su final
    for(i = mi_multiset.begin(); i!= mi_multiset.end(); i++ )
    {
        //se suma el auxiliar con el valor que tiene la posicion donde esta el iterador
        aux += *i;
        prom = aux/tam;
    }
// retorna promedio.
    return prom;
}

int main ()
{
// Ingeniero Trabaje Junto con Sindy Suazo.

    //Funcion evaluadora
    evaluar();
    return 1;
}
