#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>

#include "Persona.h"

namespace RRHH
{
    class Empleado : public Persona
    {
        public:
            Empleado();
            virtual ~Empleado();

            int Getsalario() { return salario; }
            void Setsalario(int val) { salario = val; }
            std::string Getdepartamento() { return departamento; }
            void Setdepartamento(std::string val) { departamento = val; }

            virtual std::string toString();
            virtual int calcularSalario() = 0;

            virtual void hablar(std::string texto);

            static const int SALARIO_MINIMO = 1862000;

        protected:

        private:
            int salario;
            std::string departamento;
    };
}
#endif // EMPLEADO_H
