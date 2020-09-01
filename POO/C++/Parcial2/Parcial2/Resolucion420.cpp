#include "Resolucion420.h"
using namespace alquileres;
/**
	Caleb Trepowski Castillo
	4635928
*/
Resolucion420::Resolucion420() : Pelicula()
{

}

Resolucion420::Resolucion420(string _titulo, int _anho) : Pelicula(_titulo, _anho)
{

}

Resolucion420::~Resolucion420()
{
	//dtor
}

int Resolucion420::calcularCostoDiario()
{
	int factor;
	if(anho < 2000) {factor = 12;}
	else if(anho >= 2000 && anho <= 2010) {factor = 20;}
	else if(anho >= 2011 && anho <= 2018) {factor = 25;}
	else {factor = 30;}
	return 200*factor;
}

string Resolucion420::toString()
{
	ostringstream aux;
	aux << "\nResolucion420" << Pelicula::toString();
	return aux.str();
}
