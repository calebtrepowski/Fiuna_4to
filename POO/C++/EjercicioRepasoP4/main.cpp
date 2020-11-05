#include <iostream>
#include "Fecha.h"
#include "Persona.h"
#include "NumeroTelefonico.h"
using namespace std;

int main()
{
	Fecha f(31,10,2002);
	Fecha f2(30,10,2002);
	cout<<f2-f<<endl;
	NumeroTelefonico t("+595","97","1142205");
    Persona p(1234567,"Perez","Gonzalez","Armando",f,t);
    //cout << p.calcularEdad()<<'\n';
    cout<<p;
    return 0;
}
