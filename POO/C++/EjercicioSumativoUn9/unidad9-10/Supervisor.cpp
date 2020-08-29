#include "Supervisor.h"
using namespace rrhh;
Supervisor::Supervisor()
{

}

Supervisor::Supervisor(int ced, string nom, string ape,
												unsigned int sal, string depto)
												: Empleado(ced,nom,ape,sal,depto)
{

}

Supervisor::~Supervisor()
{
	//dtor
}

string Supervisor::toString()
{
	ostringstream a;
	a << Empleado::toString();
	a << "\nSobreSueldo: " << SOBRE_SUELDO << "\n";
	return a.str();
}
int Supervisor::calcularSalario()
{
	return (Getsalario() + SOBRE_SUELDO)*0.77;
}
void Supervisor::comer(string comida, float cant)
{
	cout << "Supervisor comiendo en un restaurante"<<endl;
	Empleado::comer(comida, cant);
}

void Supervisor::trabajar(){
  cout << "Supervisor trabajando, supervisando"<<endl;
}
void Supervisor::descansar(){
  cout << "Supervisor descansando"<<endl;
}

string Supervisor::cobrarSalario()
{
	ostringstream a;
    a << "Supervisor cobra en cheque: " << calcularSalario();
    return a.str();
}
