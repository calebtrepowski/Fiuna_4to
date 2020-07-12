#include "Jefe.h"
#include <sstream>

RRHH::Jefe::Jefe()
{
    //ctor
}

RRHH::Jefe::~Jefe()
{
    //dtor
}

int RRHH::Jefe::calcularSalario()
{
    return int( ( RRHH::Empleado::SALARIO_MINIMO + RRHH::Jefe::SOBRE_SUELDO )*0.83f );
}
std::string RRHH::Jefe::toString()
{
    std::ostringstream aux;
    aux << "\nJefe\n" << RRHH::Persona::toString();
    return aux.str();
}
