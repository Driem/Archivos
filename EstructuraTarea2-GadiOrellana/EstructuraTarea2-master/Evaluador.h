#ifndef EVALUADOR_H
#define EVALUADOR_H

#include <iostream>       // std::cin, std::cout
#include <stack>          // std::queue
#include <list>          // std::queue
using namespace std;

void evaluar();
bool sonPares(stack<int> mi_pila);
bool sonPares(list<int> mi_lista);
bool existe(list<string> mi_list, string str);
bool existe(stack<string> mi_pila, string str);
int getSuma(stack<int> mi_pila);
int getSuma(list<int> mi_pila);
bool esPalindroma(list<char>mi_lista);

#endif // EVALUADOR_H
