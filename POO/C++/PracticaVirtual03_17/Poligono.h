#ifndef POLIGONO_H
#define POLIGONO_H

#include <iostream>
#include <sstream>

using namespace std;

class Poligono
{
    public:
        Poligono();
        Poligono(float _largo);
        virtual ~Poligono();

        float Getlargo() { return largo; }
        void Setlargo(float _largo) { largo = _largo; }

        virtual string toString();
        virtual float perimetro() = 0;
        virtual float area() = 0;

    protected:
        float largo;

    private:
};

#endif // POLIGONO_H
