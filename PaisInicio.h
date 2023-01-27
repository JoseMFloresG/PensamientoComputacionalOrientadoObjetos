#ifndef PAISINICIO_H
#define PAISINICIO_H
#include <iostream>
#include <fstream>

using namespace std;

class PaisInicio
{
    public:
        //Atributos
        int poblacion;
        int pInfectada;
        string mes, nombre;
        int infectados;
        int aumento;
        //Metodos
        void impIniciales();
        void Contexto();
        //void

};
void PaisInicio::impIniciales()
{
    cout<<"Escribe cuanta gente va a tener tu país"<<endl;
    cin>>poblacion;
    cout<<"Cuantos infectados iniciales va a tener tu país?"<<endl;
    cin>>infectados;
    cout<<"Como se va a llamar tu país?"<<endl;
    cin>>nombre;

}
void PaisInicio::Contexto()
{
    cout<<"A continuación se te creara un archivo en donde se desplegara el progreso como si estuvieras en otros Países"<<endl;
    cout<<"Los datos quedarían así: "<<endl;
    cout<<"País         - "<<nombre<<endl;
    cout<<"Poblacion    - "<<poblacion<<endl;
    cout<<"Infectados   - "<<infectados<<endl;
}

#endif // PAISINICIO_H
