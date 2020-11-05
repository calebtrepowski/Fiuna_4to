#ifndef CODIGONOENCONTRADO_H
#define CODIGONOENCONTRADO_H

#include <exception>

/**
Nombre: Caleb Trepowski Castillo
CI: 4635928
*/

class CodigoNoEncontrado : public std::exception
{
public:
    const char * what() const throw() {
        return "Codigo No Encontrado\n";
    }
};

#endif // CODIGONOENCONTRADO_H
