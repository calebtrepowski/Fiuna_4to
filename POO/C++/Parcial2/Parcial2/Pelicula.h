#ifndef PELICULA_H
#define PELICULA_H

#include<iostream>
#include<sstream>
using namespace std;
/**
	Caleb Trepowski Castillo
	4635928
*/
namespace alquileres
{
	class Pelicula
{
	public:
		Pelicula();
		Pelicula(string, int);
		virtual ~Pelicula();

		string Gettitulo() { return titulo; }
		void Settitulo(string val) { titulo = val; }
		int Getanho() { return anho; }
		void Setanho(int val) { anho = val; }

		virtual int alquiler(int);
		virtual string toString();
		virtual int calcularCostoDiario() = 0;

	protected:
		string titulo;
		int anho;

	private:
};
}


#endif // PELICULA_H
