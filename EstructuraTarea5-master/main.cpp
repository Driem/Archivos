
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <set>          // std::list
using namespace std;

int infinito = 9999;

//Dado: un grafo con 5 nodos implementado en una tabla (arreglo bidimensional)
//Dado: las columnas de la tabla representan el inicio y las filas el destino
//Dado: las aristas tienen un valor de 0 si apuntan a ellas, infinito si no esta conectada y de lo contrario significa que sí hay una conexion entre los nodos

//Devuelve verdadero si existe al menos un camino para llegar desde el nodo inicio hasta el nodo destino
bool existeCamino(int grafo[5][5], int inicio, int destino)
{
    //En esta funcion trabaje con Julie Suazo
   //Evalua si hay infinito en el camino de regreso
    if(grafo[destino][inicio] != infinito)
        return false;// retorna false si se topa con un infinito

    return true;// si no se encontro con ninguna retorna true

    //
    }

//Ej. si la profundidad es igual a 0 solo se devuelve el nodo inicial
//Ej. si la profundidad es igual a 1 se devuelve el nodo inicial y sus adjacentes
//Ej. si la profundidad es igual a 2 se devuelve el nodo inicial, sus adjacentes y los adjacentes de los adjacentes


set<int> obtenerAdjacentes(int grafo[5][5], int inicio, int profundidad)
{
    set<int> respuesta;

// se inserta el el inicio en el grafo
respuesta.insert(inicio);
// se hace la primera evaluacion
    if(profundidad<=0)//Verifica si la profundidad es igual a 0 solo se devuelve el nodo inicial
        return respuesta;

         for(int i=0; i<5; i++)//se crea el ciclo con el numero de columnas del grafo para que recorra sus abyasentes
            if(grafo[inicio][i] > 0 && grafo[inicio][i] < infinito) //Verifica si el nodo no es igual a 0 o infinito
                respuesta.insert(i);// al no se igual a 0 ni infinito es una adjacente y se agrega

    if (profundidad == 1)//Verifica si la profundidad es igual a 1 se devuelve el nodo inicial y sus adjacentes
            return respuesta;

          for(int i=0; i<5; i++)//se crea el ciclo con el numero de columnas del grafo para que recorra sus abyasentes
            if(grafo[inicio][i] > 0 && grafo[inicio][i] < infinito) //Verifica si el nodo no es igual a 0 o infinito
              for(int j=0; j<5; j++)// al no ser 0 ni infinito se hace hace otro ciclo que recorra mas a fondo el grafo
                    if(grafo[i][j] > 0 && grafo[i][j] < infinito)//Valida si las abjacentes de las abjacentes no son menores que 0 y no sean igual a infinito
                        respuesta.insert(j);//Se ingresan las abjacentes

            return respuesta;// al no cumplirse las otras se cumple  esta condicion si la profundidad es igual a 2 se devuelve el nodo inicial, sus adjacentes y los adjacentes de los adjacentes


}

int main ()
{
    //Trabaje con julissa Suazo
    evaluar();

    return 1;
}
