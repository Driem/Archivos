#include "Evaluador.h"

void evaluar()
{
    int nota = 0;

    cout<<"Ejercicio agregarASet:\t\t\t";
    set<int>s;
    agregarASet(&s,2);
    agregarASet(&s,5);
    if( (*s.find(2)) == 2 && (*s.find(5)) == 5)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio agregarMap:\t\t\t";
    map<string,int>m;
    agregarMap(&m,"A",1);
    agregarMap(&m,"B",2);
    if( m["A"] == 1 && m["B"] == 2)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio contarElementosMultiset:\t";
    multiset<int>ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.insert(3);
    if( contarElementosMultiset(ms,1) == 1
        && contarElementosMultiset(ms,2) == 3
        && contarElementosMultiset(ms,3) == 2
        && contarElementosMultiset(ms,4) == 0 )
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }


    cout<<"Ejercicio contarElementosMultimap:\t";
    multimap<string,int>mp;
    mp.insert(std::pair<string,int>("a",100));
    mp.insert(std::pair<string,int>("b",200));
    mp.insert(std::pair<string,int>("b",300));
    mp.insert(std::pair<string,int>("c",400));

    if( contarElementosMultimap(mp,"a") == 1
        && contarElementosMultimap(mp,"b") == 2
        && contarElementosMultimap(mp,"c") == 1
        && contarElementosMultimap(mp,"d") == 0 )
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio sumaElementosMultiset:\t";
    multiset<int>ms2;
    ms2.insert(1);
    ms2.insert(2);
    ms2.insert(2);
    ms2.insert(2);
    ms2.insert(3);
    ms2.insert(3);
    if( sumaElementosMultiset(ms2,1) == 1
        && sumaElementosMultiset(ms2,2) == 6
        && sumaElementosMultiset(ms2,3) == 6 )
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio sumaElementosMultimap:\t";
    multimap<string,int>mp2;
    mp2.insert(std::pair<string,int>("a",100));
    mp2.insert(std::pair<string,int>("b",200));
    mp2.insert(std::pair<string,int>("b",300));
    mp2.insert(std::pair<string,int>("c",400));
    if( sumaElementosMultimap(mp2,"a") == 100
        && sumaElementosMultimap(mp2,"b") == 500
        && sumaElementosMultimap(mp2,"c") == 400
        && sumaElementosMultimap(mp2,"d") == 0 )
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio promedioElementosMultiset:\t";
    multiset<int>ms3;
    ms3.insert(10);
    ms3.insert(10);
    ms3.insert(20);
    ms3.insert(20);
    ms3.insert(30);
    ms3.insert(30);
    if( promedioElementosMultiset(ms3) == 20 )
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

//
    cout<<endl<<"Nota: "<<nota<<"/7"<<endl;
}
