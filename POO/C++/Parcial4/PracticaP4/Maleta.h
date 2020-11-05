#ifndef MALETA_H
#define MALETA_H

#include "Articulo.h"

/**
Nombre: Caleb Trepowski Castillo
CI: 4635928
*/

namespace parcial4
{
class Maleta : public Articulo
{
public:
    Maleta( int _codigo, std::string _descripcion, int _precioCompra,
            float _capacidad );
    virtual ~Maleta();

    float Getcapacidad() { return capacidad; }
    void Setcapacidad( float val ) { capacidad = val; }

    int precioVenta();
    std::string toString();

protected:

private:
    float capacidad;
};
}
#endif // MALETA_H
