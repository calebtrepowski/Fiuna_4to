#ifndef POSICIONNOVALIDA_H
#define POSICIONNOVALIDA_H

#include <exception>

/**
Nombre: Caleb Trepowski Castillo
CI: 4635928
*/

class PosicionNoValida : public std::exception
{
public:
    const char * what() const throw() {
        return "Posicion No Valida\n";
    }
};

#endif // POSICIONNOVALIDA_H
