#ifndef ARTICULO_H
#define ARTICULO_H

#include <iostream>
#include <sstream>

/**
Nombre: Caleb Trepowski Castillo
CI: 4635928
*/

namespace parcial4
{
class Articulo
{
public:
    Articulo();
    Articulo( int _codigo, std::string _descripcion, int _precioCompra );
    virtual ~Articulo();


    int Getcodigo() { return codigo; }
    void Setcodigo( int val ) { codigo = val; }
    std::string Getdescripcion() { return descripcion; }
    void Setdescripcion( std::string val ) { descripcion = val; }
    int GetprecioCompra() { return precioCompra; }
    void SetprecioCompra( int val ) { precioCompra = val; }

    virtual int precioVenta() = 0;
    virtual std::string toString();

protected:

private:
    int codigo;
    std::string descripcion;
    int precioCompra;
};
}
#endif // ARTICULO_H
