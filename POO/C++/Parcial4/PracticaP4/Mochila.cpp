#include "Mochila.h"

/**
Nombre: Caleb Trepowski Castillo
CI: 4635928
*/

parcial4::Mochila::Mochila( int _codigo, std::string _descripcion,
                            int _precioCompra,
                            std::string _color ) :
    Articulo( _codigo, _descripcion, _precioCompra )
{
    color = _color;
}

parcial4::Mochila::~Mochila()
{
}

int parcial4::Mochila::precioVenta()
{
    return ( int )( Articulo::GetprecioCompra() * 1.40 );
}

std::string parcial4::Mochila::toString()
{
    std::ostringstream aux;
    aux << "Mochila" << std::endl;
    aux << Articulo::toString();
    aux << "Color: " << color << std::endl;
    return aux.str();
}
