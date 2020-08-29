#include "Cobrador.h"
using namespace rrhh;

Cobrador::Cobrador()
{
	comision = 0;
	montoCobrado = 0;
}

Cobrador::Cobrador(int ced, string nom, string ape,
									unsigned int monto, float _comision)
									: Empleado(ced,nom,ape,0,"Cobranzas")
{
	montoCobrado = monto;
	comision = _comision;
}

Cobrador::~Cobrador()
{
	//dtor
}

int Cobrador::calcularSalario()
{
	return montoCobrado*comision*0.77;
}

void Cobrador::comer(string comida, float cant)
{
	cout << "Cobrador comiendo sobre su moto"<<endl;
   Empleado::comer(comida, cant);
}

void Cobrador::trabajar(){
    cout << "Cobrador trabajando, cobrando"<<endl;
}
void Cobrador::descansar(){
    cout << "Cobrador descansando"<<endl;
}

string Cobrador::cobrarSalario()
{
	ostringstream a;
    a << "Cobrador cobra en efectivo: " << calcularSalario();
    return a.str();
}

string Cobrador::toString()
{
		ostringstream a;
    a << Empleado::toString();
    a << "\nComision: " << comision;
    a << "\nMontoCobrado: " << montoCobrado << "\n";
    return a.str();
}
