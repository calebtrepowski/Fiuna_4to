#include<iostream>
using namespace std;
class Empleado { virtual int calcularSalario() = 0;};

class Jefe: public Empleado { public: int calcularSalario() { return 5000000; } };

int main()
{
    Empleado *e;
    e = new Jefe;
    Jefe *j = dynamic_cast<Jefe *>( e );

    if( j != NULL )
    {     cout << "El salario es " << j.calcularSalario(); }
    else
    {     cout << "No puedo convertir Empleado* a Jefe*"; }

    return 0;
}
