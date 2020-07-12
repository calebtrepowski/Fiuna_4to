#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "Poligono.h"


class Rectangulo : public Poligono
{
    public:
        Rectangulo();
        Rectangulo(float an,float lar);
        virtual ~Rectangulo();

        float Getancho() { return ancho; }
        void Setancho(float val) { ancho = val; }

        float perimetro();
        float area();
        string toString();

    private:
        float ancho;
};

#endif // RECTANGULO_H
