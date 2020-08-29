#include "Gerente.h"
using namespace rrhh;

Gerente::Gerente()
{
    //ctor
}

Gerente::~Gerente()
{
    //dtor
}

Gerente::Gerente(int c, string n, string a, unsigned int s,
                 string d, unsigned int rc) : Empleado(c,n,a,s,d) {
        SetrespCargo(rc);
}

string Gerente::toString() {
    ostringstream a;
    a << Empleado::toString();
    a << "\n%Resp Cargo: " << respCargo << "\n";
    return a.str();
}

void Gerente::comer(string comida,float cant) {
   cout << "Gerente comiendo en un Restaurante"<<endl;
   Empleado::comer(comida, cant);
}
int Gerente::calcularSalario(){
   return (int)((salario + respCargo )*0.77);
}

void Gerente::trabajar(){
    cout << "Gerente trabajando, gerenciando"<<endl;
}
void Gerente::descansar(){
    cout << "Gerente descansando"<<endl;
}
string Gerente::cobrarSalario() {
    ostringstream a;
    a << "Gerente cobra en cheque: " << calcularSalario();
    return a.str();
}
