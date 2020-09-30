#include <iostream>
#include "List.h"
#include "Pelicula.h"

using namespace std;

void fila2() {
    /*declare un objeto tipo lista llamado pelis que acepte solo Peliculas */
    List<Pelicula> pelis;

    Pelicula p1("Identidad desconocida", 2002);
    Pelicula p2("The Social Dilema", 2020);
    Pelicula p3("Los otros", 2001);
    Pelicula p4("Minions", 2015);

    pelis.add(p1);
    pelis += (p3);
    pelis += (p2);
    pelis.add(p4);

    pelis.save("peliculas.txt");
    cout << "La cantidad de peliculas es: " << pelis.getSize() << endl;
    cout << "Los minions esta en la pos: "<< pelis.search(p4) << endl;
    cout << "-------------------"<<endl;

    /* aqregue aquí el código para consultar las posiciones 3 y 2, en ese orden */
		cout << "Consultando las posiciones 3 y 2: " << endl;
		try {
			cout << "La pelicula en la posicion 3 es: " << pelis.get(3) << endl;
			cout << "La pelicula en la posicion 2 es: " << pelis.get(2) << endl;
		} catch (NoValidPosition& nvp)
    {
    	cerr << nvp.what();
    }




    /* aqregue aquí el código para eliminar las posiciones 3, 2 y 4, en ese orden */
    cout << "Eliminando las posiciones 3, 2, 4: " << endl;
    try {
			pelis.remove(3);
			pelis.remove(2);
			pelis.remove(4);
    } catch (NoValidPosition& nvp)
    {
    	cerr << nvp.what();
    }


    cout << "-------------------"<<endl;
    cout << "Esta vacia? " << (pelis.isEmpty() ? "SI\n" : "NO\n");
    cout << "Las peliculas que quedan son: " << endl;
    cout << pelis;
}

int main()
{
    fila2();
    return 0;
}
