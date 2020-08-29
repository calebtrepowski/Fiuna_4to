#include "Empleado.h"
using namespace rrhh;

Empleado::Empleado()
{
    salario=0;
    depart = "";
}

Empleado::Empleado(int c, string n, string a, string d) : Persona(c, n, a) {
    Setdepart(d);
    salario = 0;
}
Empleado::Empleado(int c, string n, string a, unsigned int s, string d) : Persona(c, n, a){
        Setdepart(d);
        Setsalario(s);
}

Empleado::~Empleado() {
    //dtor
}

string Empleado::toString(){
    ostringstream a;
    a << Persona::toString();
    a << "\nDepart: " << depart;
    a << "\nSalario: " << salario << "\n";
    return a.str();
}
void Empleado::comer(string comida, float cant) {
   cout << "Empleado " << Getnombre() <<
   " Comiendo " << comida << " " <<
   cant << " grs" << endl;
}
