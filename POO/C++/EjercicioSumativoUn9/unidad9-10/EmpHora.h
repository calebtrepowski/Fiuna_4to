#ifndef EMPHORA_H
#define EMPHORA_H
#include "Empleado.h"
namespace rrhh {
class EmpHora : public Empleado
{
    public:
        EmpHora();
        EmpHora(int c, string n, string a, string dep, float cant, unsigned int monto);
        virtual ~EmpHora();

        float GetcantHoras() { return cantHoras; }
        void SetcantHoras(float val) { cantHoras = val; }
        int GetmontoHora() { return montoHora; }
        void SetmontoHora(int val) { montoHora = val; }

        string toString();
        int calcularSalario();
        void comer(string comida,float cantidad);

        void trabajar();
        void descansar();
        string cobrarSalario();

    protected:
        float cantHoras;
        unsigned int montoHora;
};
}
#endif // EMPHORA_H
