#include "Empleado.h"

namespace rrhh {

class Gerente : public Empleado
{
    public:

        virtual ~Gerente();

        unsigned int GetrespCargo() { return respCargo; }
        void SetrespCargo(unsigned int val) { respCargo = val; }

        Gerente();
        Gerente(int, string, string, unsigned int,
                 string, unsigned int);

        string toString();
        int calcularSalario();
        void comer(string comida,float cantidad);

        void trabajar();
        void descansar();
        string cobrarSalario();

    private:
        unsigned int respCargo;
};
}
