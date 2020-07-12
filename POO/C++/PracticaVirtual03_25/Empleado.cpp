#include "Empleado.h"
#include <sstream>

RRHH::Empleado::Empleado()
{
    salario = 0;
    departamento = "";
}

RRHH::Empleado::~Empleado()
{
    //dtor
}

std::string RRHH::Empleado::toString()
{
    std::ostringstream aux;
    aux << RRHH::Persona::toString() << "\nSalario: " << salario << "\nDepartamento: " << departamento;
    return aux.str();
}

void RRHH::Empleado::hablar(std::string texto)
{
    std::cout << texto;
}
