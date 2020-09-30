#include <iostream>
#include "Lista.h"

using namespace std;

void fila1() {
    /*declare un objeto tipo lista llamado palabras que acepte solo string */
    
    palabras.agregar("Hola");
    palabras += "Que";
    palabras += "tal";
    palabras.agregar("Como");
    palabras += "estas?";
    palabras.guardar("palabras.txt");
    cout << "La cantidad de palabras es: " << palabras.getLongitud() << endl;
    cout << "Que esta en la pos: "<< palabras.buscar("Que") << endl;
    cout << "-------------------"<<endl;
    /* agregue aquí el código para consultar las posiciones 5 y 1, en ese orden */
	cout << "Consultando las posiciones 5 y 1: " << endl;
	
	/* agregue aquí el código para eliminar las posiciones 3, 2 y 5, en ese orden */
	cout << "Eliminando las posiciones 3, 2, 5: " << endl;
    
    cout << "-------------------"<<endl;
    cout << "Esta vacia? " << (palabras.estaVacia() ? "SI\n" : "NO\n");
    cout << "Las palabras que quedan son: " << endl;
    cout << palabras;
}

int main()
{
    fila1();
    return 0;
}
