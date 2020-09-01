#include "Pelicula.h"
using namespace alquileres;
/**
	Caleb Trepowski Castillo
	4635928
*/
Pelicula::Pelicula()
{
	titulo = "";
	anho = 0000;
}

Pelicula::Pelicula(string _titulo, int _anho)
{
	titulo = _titulo;
	anho = _anho;
}

Pelicula::~Pelicula()
{
	//dtor
}

int Pelicula::alquiler(int _cantDias)
{
	return (int)(calcularCostoDiario()*_cantDias);
}
string Pelicula::toString()
{
	ostringstream aux;
	aux << "\nTitulo: " << titulo << "\nAnho: " << anho;
	return aux.str();
}
