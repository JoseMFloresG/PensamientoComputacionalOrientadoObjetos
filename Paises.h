#ifndef PAISES_H
#define PAISES_H
#include <iostream>
#include "PaisInicio.h"

using namespace std;

class Paises : public PaisInicio
{
    public:
        //Atributos
        double aumento;
        double resultado;
        string mes;
        //Metodos
        void calculoMexico();
        void imprimeInfo();

};

void Paises::calculoMexico()
{
    pInfectada=(poblacion*aumento)+pInfectada;
    cout<<"Los infectados son: "<<pInfectada<<endl;
}

void Paises::imprimeInfo()
{
    cout<<"Suponiendo que tu país se comporte como Mexico reaccionara así: "<<endl;
    cout<<"Poblacion sana inicial: "<<poblacion<<endl;
    cout<<"Infectados iniciales: "<<infectados<<endl;
    cout<<"Empezamos"<<endl;
}

#endif // PAISES_H
