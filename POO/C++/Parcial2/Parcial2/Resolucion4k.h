#ifndef RESOLUCION4K_H
#define RESOLUCION4K_H

#include "Pelicula.h"

/**
	Caleb Trepowski Castillo
	4635928
*/
namespace alquileres
{
class Resolucion4k : public Pelicula
{
	public:
		Resolucion4k();
		Resolucion4k(string,int);
		virtual ~Resolucion4k();

		int calcularCostoDiario();
		string toString();

	protected:

	private:
};
}


#endif // RESOLUCION4K_H
