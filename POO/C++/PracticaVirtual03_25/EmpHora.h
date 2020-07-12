#ifndef EMPHORA_H
#define EMPHORA_H

#include "Empleado.h"
#include <sstream>
#include <iostream>

namespace RRHH
{
    class EmpHora : public Empleado
    {
        public:
            EmpHora();
            virtual ~EmpHora();

            double GetcantHoras() { return cantHoras; }
            void SetcantHoras(double val) { cantHoras = val; }
            int GetsalarioHora() { return salarioHora; }
            void SetsalarioHora(int val) { salarioHora = val; }

            std::string toString();
            int calcularSalario();
            void hablar(std::string texto);

        protected:

        private:
            double cantHoras;
            int salarioHora;
    };
}
#endif // EMPHORA_H
