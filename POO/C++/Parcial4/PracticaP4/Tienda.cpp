#include "Tienda.h"

/**
Nombre: Caleb Trepowski Castillo
CI: 4635928
*/

parcial4::Tienda::Tienda()
{
}

parcial4::Tienda::~Tienda()
{
}

void parcial4::Tienda::agregar( Articulo * _articulo )
{
    inventario.push_back( _articulo );
}

int parcial4::Tienda::buscar( std::string _descripcion )
{
    for( unsigned int i = 0; i < inventario.size(); i++ )
    {
        if( inventario.at( i )->Getdescripcion() == _descripcion )
        {
            inventario.at(i)->Getcodigo();
        }
    }

    return 0;
}

parcial4::Articulo * parcial4::Tienda::sacar( int _codigo )
throw( CodigoNoEncontrado )
{
    for( unsigned int i = 0; i < inventario.size(); i++ )
    {
        if( inventario.at( i )->Getcodigo() == _codigo )
        {
            return inventario.at( i + 1 );
        }
    }

    throw CodigoNoEncontrado();
}

parcial4::Articulo * parcial4::Tienda::ver( int _codigo )
throw( PosicionNoValida )
{
    if( _codigo <= 1 || _codigo > inventario.size() )
    {
        throw PosicionNoValida();
    }

    return inventario.at( _codigo );
}

std::string parcial4::Tienda::verInventario() const
{
    std::ostringstream aux;

    for( unsigned int i = 0; i < inventario.size(); i++ )
    {
        aux << inventario.at( i )->toString() << std::endl;
    }

    return aux.str();
}

void parcial4::Tienda::guardarInventario()
{
    std::ofstream file( "inventario.txt", std::ofstream::out );

    if( file.good() )
    {
        file << this->verInventario();
        file.flush();
        file.close();
    }
    else
    {
        std::cerr << "Problemas al abrir el archivo";
    }
}

void parcial4::Tienda::operator+=( Articulo * a )
{
    agregar( a );
}
