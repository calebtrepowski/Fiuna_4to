#ifndef RESOLUCION420_H
#define RESOLUCION420_H

#include "Pelicula.h"

/**
	Caleb Trepowski Castillo
	4635928
*/
namespace alquileres
{
	class Resolucion420 : public Pelicula
{
	public:
		Resolucion420();
		Resolucion420(string,int);
		virtual ~Resolucion420();

		int calcularCostoDiario();
		string toString();

	protected:

	private:
};
}


#endif // RESOLUCION420_H
