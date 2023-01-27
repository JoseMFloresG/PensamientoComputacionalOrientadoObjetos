//José Miguel Flores Glz. A01383155
//Codigo de Etica: "Apegandome al codigo de etica de los estudiantes del Tecnologico de Monterrey,me comprometo a que mi actuacion en este examen este regida por la honestidad academica"

#include <iostream>
#include <fstream>
#include "PaisInicio.h"
#include "Paises.h"

using namespace std;

PaisInicio lista[10];
ifstream archLeer;
ofstream archEscribir;
int tam;
int x;
int poblacion;
int pInfectada;
string mes, nombre;
int infectados;
double aumento;
double resultado;

int main()
{
    //impIniciales();
    archLeer.open("Mexico.txt");
    if (!archLeer)
    {
        cout<<"El archivo (Mexico.txt) NO se abre correctamente"<<endl;
        exit(0);
    }
    cout<<"El archivo (Mexico.txt) se abrio con exito"<<endl;
    //Imprimimos los datos de la funcion
    cout << "Hola, este programa te permitira hacer una simulacion del progreso del coronavirus" << endl;
    cout<<"Para empezar necesitare hacerte unas preguntas basicas: "<<endl;
    cout<<"Escribe cuanta gente va a tener tu pais"<<endl;
    cin>>poblacion;
    cout<<"Cuantos infectados iniciales va a tener tu pais?"<<endl;
    cin>>infectados;
    cout<<"Como se va a llamar tu pais?"<<endl;
    cin>>nombre;
    cout<<endl;
    cout<<"Los datos quedarian asi: "<<endl;
    cout<<"Pais         - "<<nombre<<endl;
    cout<<"Poblacion    - "<<poblacion<<endl;
    cout<<"Infectados   - "<<infectados<<endl;
    //Escritura de archivo
    archEscribir.open("PepeMike.txt");
    archEscribir<<"José Miguel Flores Glz. A01393155"<<endl;
    //Sacamos los datos del archivo
    while (!archLeer.eof())//Mientras no sea fin de archivo
    {
        archLeer>>lista[tam].mes;
        archLeer>>lista[tam].pInfectada;
        archLeer>>lista[tam].aumento;
        tam++;
    }
    cout<<"A continuacion se te creara un archivo en donde se desplegara el progreso como si estuvieras en otros Paises"<<endl;
    for (int i=0; i<tam; i++)
    {
        pInfectada=(poblacion*aumento)+pInfectada;
        cout<<"Los infectados son: "<<pInfectada<<endl;
    }
    archEscribir.close();
    archLeer.close();
}
