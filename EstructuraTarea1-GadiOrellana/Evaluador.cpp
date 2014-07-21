#include "Evaluador.h"

string getPrimerElemento(queue<string> mi_cola);


void evaluar()
{
    int nota = 0;

    queue<string>mi_cola_str;
    mi_cola_str.push("A");
    mi_cola_str.push("B");
    mi_cola_str.push("C");

    queue<string>mi_cola_str2;
    mi_cola_str2.push("Hola");
    mi_cola_str2.push("Mundo");

    cout<<"Ejercicio getPrimerElemento:\t";
    if(getPrimerElemento(mi_cola_str)=="A" && getPrimerElemento(mi_cola_str2)=="Hola")
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio getTamano:\t\t";
    if(getTamano(mi_cola_str)==3 && getTamano(mi_cola_str2)==2)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio existeEnCola:\t\t";
    if(existeEnCola(mi_cola_str,"B")==true && existeEnCola(mi_cola_str2,"jeje")==false)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }


    queue<int>mi_cola_int;
    mi_cola_int.push(1);
    mi_cola_int.push(2);
    mi_cola_int.push(3);

    queue<int>mi_cola_int2;
    mi_cola_int2.push(10);
    mi_cola_int2.push(20);

    cout<<"Ejercicio getMayor:\t\t";
    if(getMayor(mi_cola_int)==3 && getMayor(mi_cola_int2)==20)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio getMenor:\t\t";
    if(getMenor(mi_cola_int)==1 && getMenor(mi_cola_int2)==10)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    queue<float>mi_cola_float;
    mi_cola_float.push(1);
    mi_cola_float.push(2);
    mi_cola_float.push(3);

    queue<float>mi_cola_float2;
    mi_cola_float2.push(10);
    mi_cola_float2.push(20);

    cout<<"Ejercicio getPromedio:\t\t";
    if(getPromedio(mi_cola_float)==2 && getPromedio(mi_cola_float2)==15)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<endl<<"Nota: "<<nota<<"/6"<<endl;
}
