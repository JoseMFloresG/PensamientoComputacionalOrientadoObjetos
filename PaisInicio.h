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
    cout<<"Escribe cuanta gente va a tener tu pa�s"<<endl;
    cin>>poblacion;
    cout<<"Cuantos infectados iniciales va a tener tu pa�s?"<<endl;
    cin>>infectados;
    cout<<"Como se va a llamar tu pa�s?"<<endl;
    cin>>nombre;

}
void PaisInicio::Contexto()
{
    cout<<"A continuaci�n se te creara un archivo en donde se desplegara el progreso como si estuvieras en otros Pa�ses"<<endl;
    cout<<"Los datos quedar�an as�: "<<endl;
    cout<<"Pa�s         - "<<nombre<<endl;
    cout<<"Poblacion    - "<<poblacion<<endl;
    cout<<"Infectados   - "<<infectados<<endl;
}

#endif // PAISINICIO_H
