#include "Poligono.h"
using namespace std;

Poligono::Poligono()
{
    largo = 0;
}

Poligono::Poligono(float _largo)
{
    largo = _largo;
}

Poligono::~Poligono()
{
    //dtor
}

string Poligono::toString()
{
    ostringstream aux;
    aux<<"Largo: "<<largo;
    return aux.str();
}
