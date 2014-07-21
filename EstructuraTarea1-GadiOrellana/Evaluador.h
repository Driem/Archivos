#ifndef EVALUADOR_H
#define EVALUADOR_H

#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
using namespace std;

void evaluar();
int getTamano(queue<string> mi_cola);
bool existeEnCola(queue<string> mi_cola, string str);
int getMayor(queue<int> mi_cola);
int getMenor(queue<int> mi_cola);
float getPromedio(queue<float> mi_cola);

#endif // EVALUADOR_H
