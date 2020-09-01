#include "Resolucion4k.h"
using namespace alquileres;
/**
	Caleb Trepowski Castillo
	4635928
*/
Resolucion4k::Resolucion4k() : Pelicula()
{
	//ctor
}

Resolucion4k::Resolucion4k(string _titulo, int _anho) : Pelicula(_titulo, _anho)
{

}

Resolucion4k::~Resolucion4k()
{
	//dtor
}

int Resolucion4k::calcularCostoDiario()
{
	int factor;
	if(anho < 2000) {factor = 12;}
	else if(anho >= 2000 && anho <= 2010) {factor = 20;}
	else if(anho >= 2011 && anho <= 2018) {factor = 25;}
	else {factor = 30;}
	return 300*factor;
}
string Resolucion4k::toString()
{
	ostringstream aux;
	aux << "\nResolucion4k" << Pelicula::toString();
	return aux.str();
}
