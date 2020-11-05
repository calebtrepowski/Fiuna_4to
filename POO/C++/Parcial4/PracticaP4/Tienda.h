#ifndef TIENDA_H
#define TIENDA_H

/**
Nombre: Caleb Trepowski Castillo
CI: 4635928
*/

#include <vector>
#include <fstream>
#include "Articulo.h"
#include "CodigoNoEncontrado.h"
#include "PosicionNoValida.h"

namespace parcial4
{
class Tienda
{
public:
    Tienda();
    virtual ~Tienda();

    void agregar( Articulo * _articulo );
    int buscar( std::string _descripcion );
    Articulo * sacar( int _codigo ) throw( CodigoNoEncontrado );
    Articulo * ver( int _codigo ) throw( PosicionNoValida );
    std::string verInventario() const;
    void guardarInventario();

    void operator+=( Articulo * a );
    friend std::ostream & operator<<( std::ostream & os, Tienda & t ) {
        os << t.verInventario();
        return os;
    }

protected:

private:
    std::vector<Articulo *> inventario;
};
}
#endif // TIENDA_H
