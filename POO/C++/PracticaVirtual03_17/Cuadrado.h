#ifndef CUADRADO_H
#define CUADRADO_H

#include "Poligono.h"


class Cuadrado : public Poligono
{
    public:
        Cuadrado();
        Cuadrado(float _largo);
        float perimetro();
        float area();
        virtual ~Cuadrado();
};

#endif // CUADRADO_H
