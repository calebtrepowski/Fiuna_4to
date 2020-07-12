#include "Cuadrado.h"

Cuadrado::Cuadrado() : Poligono();
{

}

Cuadrado::Cuadrado(float _largo) : Poligono(_largo){}

float Cuadrado::perimetro()
{
    return largo*4;
}

float Cuadrado::area()
{
    return largo*largo;
}

Cuadrado::~Cuadrado()
{
    //dtor
}
