#ifndef VEHICULO_H
#define VEHICULO_H

#include<iostream>
using namespace std;


class Vehiculo
{
    public:
        Vehiculo();
        Vehiculo(string _marca,string _color);
        virtual ~Vehiculo();

        string getMarca();
        string getColor();
        float getKilometraje();
        float getCombustible();
        float getCapacidad();
        void setColor(string _color);
        bool conducir(float _dist);
        int cargarCombustible(float _cant);
        string ToString();

        static const int PRECIO = 4500; /*static se usa para acceder sin necesidad de un objeto*/
        static const float CONSUMO = 10; /*CONSTANTES SIEMPRE EN MAYUSCULAS*/


    private:
        string marca;
        string color;
        float kilometraje;
        float combustible;
        float capacidad;
};

#endif // VEHICULO_H
