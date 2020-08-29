#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empleado.h"

namespace rrhh {
class Vendedor : public Empleado
{
    public:
        Vendedor();
        Vendedor(int, string, string, unsigned int,
                 string, unsigned int,  float);
        virtual ~Vendedor();

        unsigned int GetmontoVend() { return montoVend; }
        void SetmontoVend(unsigned int val) { montoVend = val; }
        float Getcomision() { return comision; }
        void Setcomision( float val) { comision = val; }

        string toString();
        int calcularSalario();
        void comer(string comida,float cantidad);

        void trabajar();
        void descansar();
        string cobrarSalario();


    private:
        unsigned int montoVend;
        float comision;
};
}
#endif // VENDEDOR_H
