#include "EmpHora.h"
using namespace rrhh;

EmpHora::~EmpHora()
{
    //dtor
}
EmpHora::EmpHora()
{
    cantHoras = 0;
    montoHora = 0;
}

EmpHora::EmpHora(int c, string n, string a, string dep, float cant, unsigned int monto) : Empleado(c,n,a,0,dep) {
        SetcantHoras(cant);
        SetmontoHora(monto);
}

string EmpHora::toString() {
    ostringstream a;
    a << Empleado::toString();
    a << "\nMonto Hora : " << montoHora;
    a << "\n%Horas Trab: " << cantHoras << "\n";
    return a.str();
}

void EmpHora::comer(string comida,float cant) {
   cout << "EmpHora comiendo en la hora de descanso"<<endl;
   Empleado::comer(comida, cant);
}
int EmpHora::calcularSalario(){
   return (int)(((montoHora *cantHoras))*77/100);
}

void EmpHora::trabajar(){
    cout << "EmpHora trabajando "<<endl;
}
void EmpHora::descansar(){
    cout << "EmpHora descansando"<<endl;
}
string EmpHora::cobrarSalario() {
    ostringstream a;
    a << "EmpHora cobra en efectivo semanalmente: " << calcularSalario();
    return a.str();
}
