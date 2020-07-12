#include "Rectangulo.h"

using namespace std;
Rectangulo::Rectangulo()
{
    ancho = 0;
}

Rectangulo::Rectangulo(float an,float lar) : Poligono(lar)
{
    ancho = an;
}

Rectangulo::~Rectangulo()
{
    //dtor
}


float Rectangulo::perimetro()
{
    return 2*(largo + ancho);
}

float Rectangulo::area()
{
    return largo * ancho;
}

string Rectangulo::toString()
{
    ostringstream aux;
    aux<<Poligono::toString()<<"\nAncho: "<<ancho;
    return aux.str();
}
