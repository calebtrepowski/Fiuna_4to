#include <iostream>
#include "Articulo.h"
#include "Tienda.h"
#include "Mochila.h"
#include "Maleta.h"

/**
Nombre: Caleb Trepowski Castillo
CI: 4635928
*/

int main()
{
    parcial4::Tienda t1;
    parcial4::Maleta mal1
    (
        1,
        "Permite guardar cosas para ir de viaje",
        165000,
        3.5
    );
    parcial4::Maleta mal2
    (
        32,
        "Permite guardar cosas para ir de viaje por mas tiempo",
        200000,
        7.8
    );
    parcial4::Mochila moc1
    (
        45,
        "Mochila con porta Notebook",
        150000,
        "Rojo"
    );
    parcial4::Mochila moc2
    (
        52,
        "Mochila con porta Notebook y porta Botellas",
        170000,
        "Verde"
    );
    t1.agregar( &mal1 );
    t1 += &mal2;
    t1 += &moc1;
    t1 += &moc2;
    std::cout << "Inventario:\n";
    std::cout << "\n\n****\n" << t1.verInventario() << "****\n\n";

    try
    {
        int codigoASacar = 1;
        std::cout << "Sacando articulo con codigo " << codigoASacar << std::endl;
        t1.sacar( codigoASacar );
        std::cout << "Sacado correctamente!\n\n";
        codigoASacar = 2;
        std::cout << "Sacando articulo con codigo " << codigoASacar << std::endl;
        t1.sacar( codigoASacar );
    }
    catch( CodigoNoEncontrado & cne )
    {
        std::cerr << "Error: " << cne.what() << '\n';
    }

    std::cout << "Inventario actualizado:\n";
    std::cout << "\n\n****\n" << t1.verInventario() << "****\n\n";

    try
    {
        int posAVer = 3;
        std::cout << "Viendo articulo en posicion " << posAVer << std::endl;
        std::cout << t1.ver( posAVer )->toString();
        std::cout << "Visto correctamente!\n\n";
        posAVer = -1;
        std::cout << "Viendo articulo en posicion " << posAVer << std::endl;
        std::cout << t1.ver( posAVer )->toString();
    }
    catch( PosicionNoValida & pnv )
    {
        std::cerr << "Error: " << pnv.what() << '\n';
    }

    std::string descABuscar = "Permite guardar cosas para ir de viaje";
    std::cout << "Buscando por descripcion: " << descABuscar << '\n';
    std::cout << "Tiene codigo: " << t1.buscar( descABuscar ) <<
              "\n\n";
    descABuscar = "Permite guardar cosas para ir de paseo";
    std::cout << "Buscando por descripcion: " << descABuscar << '\n';
    std::cout << "Tiene codigo: " << t1.buscar( descABuscar ) <<
              "\n\n";
	std::cout << "\n\n****\n" << "Viendo Inventario con <<\n" << "****\n\n";
	std::cout << t1;

	std::cout << "\nGuardando en archivo el inventario\n";
	try {
	t1.guardarInventario();
	std::cout << "\nGuardado exitosamente!\n";
	} catch (std::exception &e)
	{
		std::cerr << e.what();
	}

    return 0;
}
