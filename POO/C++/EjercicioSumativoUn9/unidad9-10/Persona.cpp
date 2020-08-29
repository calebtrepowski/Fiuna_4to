#include "Persona.h"

Persona::Persona()
{
    cedula = 0;
    nombre = "";
    apellido = "";
}

Persona::Persona(int c, string n, string a)
{
    //constructor con parametros
    cedula = c;
    nombre = n;
    apellido = a;
}

Persona::~Persona() {
    //destructor
}

string Persona::toString(){
    ostringstream a;
    a <<"Cedula: "<<cedula<<" Nombre: "<<nombre<<" Apellido: "<<apellido;
    return a.str();
}

void Persona::comer(string comida,float cantidad){
    cout<<"\n\tComiendo: "<<comida<< " cant: "<<cantidad<<endl;
}
