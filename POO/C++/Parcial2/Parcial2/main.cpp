#include <iostream>
/** agregue los include que faltan */
#include <exception>
#include "Pelicula.h"
#include "Resolucion420.h"
#include "Resolucion4k.h"
using namespace std;
using namespace alquileres;

/**
	Caleb Trepowski Castillo
	4635928
*/

/**
Cree aqui la clase PosicionIncorrecta
*/
class PosicionIncorrecta : public exception
{
	public:
	const char* what() const throw()
	{
		return "Error: Posicion leida menor a 1 o mayor al contador";
	}
};


/**
Cree el método mostrarPelicula para mostrar los datos de la película,
el costo diario de alquiler y el costo total del alquiler
*/

void mostrarPelicula(Pelicula& p)
{
	cout << p.toString();
	cout << "\nCosto diario: " << p.calcularCostoDiario();
}


int main()
{
    cout << "Segundo Examen Parcial" << endl;
    int cont = 0;
    /** Declare un vector Pelicula de 6 posiciones */
		Pelicula* P[6];
    /** Lea los datos de 3 peliculas disponibles */
    for (int i=0;i<3;i++)
		{
			cout << "\nIngrese titulo y anho de la pelicula " << i+1 << "/3:\n";
			string t; int a,res;
			cin >> t >> a;
			cout << "\nResolucion: \n1 420\n2 4k\n";
			cin >> res;
			if (res == 1) {P[i] = new Resolucion420(t,a);}
			else if(res == 2) {P[i] = new Resolucion4k(t,a);}
			//else {cout << "Introduzca 1 o 2"; --i;}
		}

    cont = 3;
    int pos = 0;
    try {
       cout << "Ingrese la posicion de la pelicula que quiere ver sus datos: ";
       cin >> pos;
       /** lance PosicionIncorrecta si la posicion leida es menor a 1 o mayor al contador */
			 if (pos < 1 || pos > cont)
			 {
			 	throw PosicionIncorrecta();
			 }
			 cout << "\nIngrese la cantidad de dias para alquilar: ";
			 int cantDias;
			 cin >> cantDias;
       /** llame al método mostrarPelicula pasandole la posicion del vector seleccionado */
			 mostrarPelicula(*P[pos-1]);
			 cout << "\nCosto total: " << P[pos-1]->alquiler(cantDias);
    }   /** complete el catch para atrapar la PosicionIncorrecta y mostrar el mensaje correspondiente */
    catch(PosicionIncorrecta& pi) {
			cout << pi.what();
    }

    return 0;
}
