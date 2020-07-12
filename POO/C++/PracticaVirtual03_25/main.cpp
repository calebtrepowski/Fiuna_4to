#include <iostream>
#include "Persona.h"
#include "Empleado.h"
#include "EmpHora.h"
#include "Jefe.h"

class Jefe;

void imprimir(RRHH::Empleado *e)
{
    std::cout << e->toString() << '\n';
    std::cout << e->calcularSalario() << '\n';
    e->hablar("Hola");
}


int main()
{
    RRHH::EmpHora eh1;
    RRHH::Jefe j1;
//    eh1.setNombre("Carlos");
//    eh1.setApellido("Gomez");
//    eh1.setCedula(123456);
//
//    eh1.Setsalario(0);
//    eh1.Setdepartamento("Cobranza");
//
//    eh1.SetcantHoras(5);
//    eh1.SetsalarioHora(20000);
//
//    std::cout << eh1.calcularSalario();
//    std::cout << eh1.toString();

    imprimir(&eh1);
    imprimir(&j1);
    return 0;
}
