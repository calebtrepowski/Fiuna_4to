#ifndef JEFE_H
#define JEFE_H

#include "Empleado.h"

namespace RRHH
{
    class Jefe : public Empleado
    {
        public:
            Jefe();
            virtual ~Jefe();

            int calcularSalario();
            std::string toString();

            static const int SOBRE_SUELDO = 800000;

        protected:

        private:
    };
}
#endif // JEFE_H
