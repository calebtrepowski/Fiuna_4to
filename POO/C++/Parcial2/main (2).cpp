#include <iostream>
/** agregue los include que faltan */

using namespace std;

/**
Cree aqui la clase PosicionIncorrecta
*/


/**
Cree el método mostrarPelicula para mostrar los datos de la película, 
el costo diario de alquiler y el costo total del alquiler
*/


int main()
{
    cout << "Segundo Examen Parcial" << endl;
    int cont = 0;
    /** Declare un vector Pelicula de 5 posiciones */
    
    /** Lea los datos de 3 peliculas disponibles */
    
    cont = 3;
    int pos = 0;
    try {
       cout << "Ingrese la posicion de la pelicula que quiere ver sus datos: ";
       cin >> pos;
       /** lance PosicionIncorrecta si la posicion leida es menor a 1 o mayor al contador */
       
       /** llame al método mostrarPelicula pasandole la posicion del vector seleccionado */
       
    }   /** complete el catch para atrapar la PosicionIncorrecta y mostrar el mensaje correspondiente */
    catch() {
		
    }

    return 0;
}
