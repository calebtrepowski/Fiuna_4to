#include <iostream>
#include <fstream>
#include "Vendedor.h"
using namespace std;

int main()
{
    //Vendedor v(123, "Juan Seberiano Vera Rockefort", Vendedor::ZONAS[0]);

    cout << "Ingrese los datos del Vendedor, tras cada campo presione Enter" <<endl;
    cout << "Ingrese Cedula, Nombre_Apellido, Zona. Cualquier letra para terminar" << endl;
    Vendedor v;
    cin >> v;
    v.generarVentas();
    cout << v.Getnombre() << " Venta Enero: " << v.Getventa(0) << endl;
    int* ventas = v.Getventas();
    for(int i=0; i<Vendedor::MESES; i++) {
        cout << " Ventas " << (i+1) << ": " << ventas[i] << endl;
    }

	ofstream salida("ventas.txt", ios_base::app);
	//ofstream salida("ventas.txt");
	salida << v;
	salida.close();

    Vendedor v2;
    ifstream entrada("ventas.txt");
    int n = 1;
    do {
        entrada >> v2;
        //Check whether state of stream is good
        //Returns true if none of the stream's
        //error state flags (eofbit, failbit and badbit) is set.
        if (entrada.good())
            cout << n << " " << v2 <<endl;
        n++;
    } while (!entrada.eof());
	entrada.close();

    return 0;
}
