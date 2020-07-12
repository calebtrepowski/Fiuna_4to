#include "Vehiculo.h"
#include <iostream>
#include <sstream> //para usar ostringstream

Vehiculo::Vehiculo() /*:: para acceder al archivo*/
{
    marca = "SM";
    color = "Negro";
    kilometraje = 0;
    combustible = 0;
    capacidad = 40;
}

Vehiculo::Vehiculo(string _marca,string _color)
{
    marca = _marca;
    color = _color;
    kilometraje = 0;
    combustible = 5;
    capacidad = 40;
}

Vehiculo::~Vehiculo()
{
    //dtor
}

string Vehiculo::getMarca()
{
    return marca;
}

string Vehiculo::getColor()
{
    return color;
}

float Vehiculo::getKilometraje()
{
    return kilometraje;
}

float Vehiculo::getCombustible()
{
    return combustible;
}

float Vehiculo::getCapacidad()
{
    return capacidad;
}

void Vehiculo::setColor(string _color)
{
    color = _color;
}

bool Vehiculo::conducir(float _dist)
{
    float cantAConsumir = _dist*CONSUMO/100.0;
    if(cantAConsumir <= combustible)
    {
        kilometraje += _dist;
        combustible -= cantAConsumir;
        return true;
    }
    else
    {
        return false;
    }
}

int Vehiculo::cargarCombustible(float _cant)
{
    if(_cant <= capacidad - combustible)
    {
        combustible += _cant;
        return _cant*PRECIO;
    }
    else
    {
        float resto = _cant - (capacidad - combustible);
        combustible = capacidad;
        return (_cant - resto)*PRECIO;
    }
}

string Vehiculo::ToString()
{
    ostringstream aux;
    aux<<"\nVehiculo\n-Marca: "<<marca<<"\n-Color: "<<color<<"\n-Kilometraje: "<<kilometraje<<"\n-Combustible: "<<combustible<<"/"<<capacidad;
    return aux.str();
}
