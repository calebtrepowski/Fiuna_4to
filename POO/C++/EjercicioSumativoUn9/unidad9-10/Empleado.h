#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Persona.h"
#include "Trabajador.h"

namespace rrhh {

class Empleado : public Persona, public Trabajador
{
    public:
        const static unsigned int SALARIO_MIN = 2200000;
        Empleado();
        Empleado(int, string, string, string);
        Empleado(int, string, string, unsigned int, string);
        virtual ~Empleado();

        unsigned int Getsalario() { return salario; }
        void Setsalario(unsigned int val) { salario = val; }
        string Getdepart() { return depart; }
        void Setdepart(string val) { depart = val; }

        virtual string toString();
        virtual void comer(string comida,float cantidad);
        virtual int calcularSalario() = 0;

    protected:
        unsigned int salario;
        string depart;
};
} //namespace

#endif // EMPLEADO_H
