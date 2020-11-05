#include "Maleta.h"

/**
Nombre: Caleb Trepowski Castillo
CI: 4635928
*/

parcial4::Maleta::Maleta( int _codigo, std::string _descripcion,
                          int _precioCompra, float _capacidad ):
    Articulo( _codigo, _descripcion, _precioCompra )
{
    capacidad = _capacidad;
}

parcial4::Maleta::~Maleta()
{
}

int parcial4::Maleta::precioVenta()
{
    return ( int )( Articulo::GetprecioCompra() + 3000 * capacidad );
}

std::string parcial4::Maleta::toString()
{
    std::ostringstream aux;
    aux << "Maleta" << std::endl;
    aux << Articulo::toString();
    aux << "Capacidad: " << capacidad << std::endl;
    return aux.str();
}
