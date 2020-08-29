#include "Vendedor.h"
using namespace rrhh;
Vendedor::Vendedor()
{
    montoVend = 0;
    comision = 0;
}
Vendedor::Vendedor(int c, string n, string a, unsigned int s,
                 string d, unsigned int mon, float com)
                 : Empleado(c,n,a,s,d) {
        SetmontoVend(mon);
        Setcomision(com);
}

Vendedor::~Vendedor()
{
    //dtor
}
string Vendedor::toString() {
    ostringstream a;
    a << Empleado::toString();
    a << "\nMonto Vend: " << montoVend;
    a << "\n%Comision: " << comision << "\n";
    return a.str();
}

void Vendedor::comer(string comida,float cant) {
   cout << "Vendedor comiendo por la calle"<<endl;
   Empleado::comer(comida, cant);
}
int Vendedor::calcularSalario(){
   return (int)((salario + (montoVend*comision/100))*77/100);
}

void Vendedor::trabajar(){
    cout << "Vendedor trabajando, vendiendo"<<endl;
}
void Vendedor::descansar(){
    cout << "Vendedor descansando"<<endl;
}
string Vendedor::cobrarSalario() {
    ostringstream a;
    a << "Vendedor cobra en efectivo: " << calcularSalario();
    return a.str();
}
