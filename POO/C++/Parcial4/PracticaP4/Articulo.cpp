#include "Articulo.h"

/**
Nombre: Caleb Trepowski Castillo
CI: 4635928
*/

parcial4::Articulo::Articulo()
{
    codigo = 0;
    descripcion = "****Descripcion por defecto****\n";
    precioCompra = 0;
}
parcial4::Articulo::Articulo( int _codigo, std::string _descripcion,
                              int _precioCompra )
{
    codigo = _codigo;
    descripcion = _descripcion;
    precioCompra = _precioCompra;
}

parcial4::Articulo::~Articulo()
{
}

std::string parcial4::Articulo::toString()
{
    std::ostringstream aux;
    aux << "Codigo: " << codigo << std::endl;
    aux << "Descripcion: " << descripcion << std::endl;
    aux << "Precio de Compra: " << precioCompra << std::endl;
    return aux.str();
}


