#include <iostream>
#include "Nodo.h"
#include "Pila.h"
using namespace std;



int main()
{
	try
	{
		Pila<int> p;
		cout << "Esta vacio? " << p.estaVacio() << '\n';
		cout << "Insertando: " << 5; p.insertar(5);
		cout << "Esta vacio? " << p.estaVacio() << '\n';
		cout << "Eliminando\n";p.eliminar();
		cout << "Esta vacio? " << p.estaVacio() << '\n';
		cout << "Insertando: " << 7;p.insertar(7);
		cout << "\nInsertando: " << 9;p.insertar(9);
		cout << "\nInsertando: " << 11;p.insertar(11);
		cout << "\nEl ultimo elemento es: " << p.ver() << '\n';
		cout << "Eliminando\n";p.eliminar();
		cout << "El ultimo elemento es: " << p.ver() << '\n';
		cout << 9 << " esta en la posicion "<< p.buscar(9) << '\n';
		cout << 7 << " esta en la posicion "<< p.buscar(7) << '\n';
		cout << "La dimension es " << p.dimension() << '\n';
		cout << "Esta vacio? " << p.estaVacio() << '\n';
		cout << "Eliminando\n";p.eliminar();
		cout << "Eliminando\n";p.eliminar();
		cout << "Esta vacio? " << p.estaVacio() << '\n';
		cout << "Eliminando\n";p.eliminar();
	}
	catch (PilaVacia& pv)
	{
		cout << pv.what();
	}
	return 0;
}
