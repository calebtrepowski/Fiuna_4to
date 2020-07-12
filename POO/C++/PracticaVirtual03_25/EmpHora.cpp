#include "EmpHora.h"


RRHH::EmpHora::EmpHora()
{
    cantHoras = 0;
    salarioHora = 0;
}

RRHH::EmpHora::~EmpHora()
{
    //
}

int RRHH::EmpHora::calcularSalario()
{
    return int( cantHoras*salarioHora*0.83f );
}

std::string RRHH::EmpHora::toString()
{
    std::ostringstream aux;
    aux << "\nEmpHora" << RRHH::Persona::toString();
}

void RRHH::EmpHora::hablar(std::string texto)
{
    std::cout << "Empleado Hora" << texto ;
}
