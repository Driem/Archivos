#ifndef EVALUADOR_H
#define EVALUADOR_H

#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list
#include <map>          // std::list
using namespace std;


void evaluar();
//agrega 'valor' a 'mi_set'
void agregarASet(set<int> *mi_set,int valor);

//agrega 'valor' a 'mi_map' usando la 'llave' como llave
void agregarMap(map<string, int> *mi_map, string llave, int valor);

//devuelve todos los elementos de 'mi_multiset' en una lista usando 'llave' como llave
int contarElementosMultiset(multiset<int> mi_multiset,int valor);

//devuelve todos los elementos de 'mi_multimap' en una lista usando 'llave' como llave
int contarElementosMultimap(multimap<string,int> mi_multimap,string llave);

//devuelve la suma de los elementos de 'mi_multiset' que usan 'llave' como llave
int sumaElementosMultiset(multiset<int> mi_multiset, int llave);

//devuelve la suma de los elementos de 'mi_multimap' que usan 'llave' como llave
int sumaElementosMultimap(multimap<string, int>, string llave);

//la cantidad de elementos que tiene 'mi_multiset'
int promedioElementosMultiset(multiset<int> mi_multiset);

#endif // EVALUADOR_H
