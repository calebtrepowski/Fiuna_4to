#ifndef MOCHILA_H
#define MOCHILA_H

#include "Articulo.h"

/**
Nombre: Caleb Trepowski Castillo
CI: 4635928
*/

namespace parcial4
{
class Mochila : public Articulo
{
public:
    Mochila( int _codigo, std::string _descripcion, int _precioCompra,
             std::string _color );
    virtual ~Mochila();

    std::string Getcolor() { return color; }
    void Setcolor( std::string val ) { color = val; }

    int precioVenta();
    std::string toString();

protected:

private:
    std::string color;
};
}
#endif // MOCHILA_H
