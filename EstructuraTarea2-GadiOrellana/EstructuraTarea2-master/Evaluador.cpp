#include "Evaluador.h"

void evaluar()
{
    int nota = 0;

    list<int>listi;
    listi.push_back(1);
    listi.push_back(2);
    listi.push_back(3);

    list<int>listi2;
    listi2.push_back(2);
    listi2.push_back(6);
    listi2.push_back(8);

    stack<int>stacki;
    stacki.push(1);
    stacki.push(2);
    stacki.push(3);

    stack<int>stacki2;
    stacki2.push(2);
    stacki2.push(6);
    stacki2.push(8);

    list<string>lists1;
    lists1.push_back("A");
    lists1.push_back("B");
    lists1.push_back("C");

    list<string>lists2;
    lists2.push_back("Hola");
    lists2.push_back("Mundo");

    stack<string>stacks1;
    stacks1.push("A");
    stacks1.push("B");
    stacks1.push("C");

    stack<string>stacks2;
    stacks2.push("Hola");
    stacks2.push("Mundo");

    list<char>listc;
    listc.push_back('f');
    listc.push_back('e');
    listc.push_back('f');
    listc.push_back('e');

    list<char>listc2;
    listc2.push_back('a');
    listc2.push_back('d');
    listc2.push_back('s');
    listc2.push_back('s');
    listc2.push_back('d');
    listc2.push_back('a');

    cout<<"Ejercicio sonPares:\t";
    if(!sonPares(stacki) && sonPares(stacki2))
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio sonPares:\t";
    if(!sonPares(listi) && sonPares(listi2))
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio existe:\t";
    if(!existe(stacks1,"Aa") && existe(stacks2,"Mundo"))
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio existe:\t";
    if(!existe(lists1,"Aa") && existe(lists2,"Mundo"))
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio getSuma:\t";
    if(getSuma(stacki)==6 && getSuma(stacki2)==16)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio getSuma:\t";
    if(getSuma(listi)==6 && getSuma(listi2)==16)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio esPalindroma:\t";
    if(!esPalindroma(listc) && esPalindroma(listc2))
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<endl<<"Nota: "<<nota<<"/7"<<endl;
}
