#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main()
{
    cout << "Prueba de la clase Vector y tm (fecha)" << endl;
    vector<int> datos;
    vector<string*> cadenas;
    string *s=new string("hola");
    cadenas.push_back(s);
    datos.push_back(10);  //pos 0
    datos.push_back(20);   //pos 1
    datos.push_back(50);

    cout << "Tamanho: " << datos.size() << endl;
    cout <<"Pos 0: " << datos.at(0)<< endl;

    datos.erase(datos.begin());
    cout << "Nuevo Tamanho: " << datos.size() << endl;
    cout <<"Pos 0: " << datos.at(0)<< endl;

    const int diaSeg = 24* 60 * 60;
    time_t ahora = time(0) - diaSeg * 2;
    tm *fecha = localtime(&ahora ) ;
    cout << "Anho: "<< 1900 + fecha->tm_year << endl;
    cout << "Mes: "<< 1 + fecha->tm_mon<< endl;
    cout << "Dia: "<<  fecha->tm_mday << endl;


    return 0;
}
