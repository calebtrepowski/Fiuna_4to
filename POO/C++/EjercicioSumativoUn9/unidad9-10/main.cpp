#include <iostream>
#include "Vendedor.h"
#include "Gerente.h"
#include "EmpHora.h"
#include "Empleado.h"
#include "Cobrador.h"
#include "Supervisor.h"

using namespace rrhh;
using namespace std;


void imprimirTrabajador(Trabajador* t) {
    //cout << t->toString() << endl;
    //No es posible porque Trabajador no tiene ningun metodo
    //toString()
    t->trabajar();
    t->descansar();
    cout << t->cobrarSalario() << endl;
}

void imprimirDatos(Empleado *e){
    cout << e->toString() << endl;
    cout << "Salario a cobrar: "
         <<  e->calcularSalario() << endl;
    e->comer("Milanesa", 150);
//    e->trabajar();
//    e->descansar();
//    cout << t->cobrarSalario() << endl;
    imprimirTrabajador(e);
    cout << "--------------------" << endl<< endl;
}



int main() {

    Empleado *e;

    cout << "Practica Herencia y Polimorfismo!" << endl << endl;
    Vendedor v(4124141, "Carla", "Decoud",
              Empleado::SALARIO_MIN, "Ventas", 15000000, 2.5);


    EmpHora eh(3456767, "Pedro", "Acosta",
               "Mantenimiento", 100, Empleado::SALARIO_MIN / 192);

    Gerente g(9898098, "Juan", "Vera",
              5000000, "Administracion", 5000000);
    Cobrador c(1234567,"Alberto","Peralta",200000,5);
    Supervisor s(3216547,"Bruno","Pont",10000000,"Cobranzas");
    const unsigned int SIZE = 5;
    //una manera de llamar a imprimirDatos
    e = &g;
    imprimirDatos(e);

    Empleado *emp[SIZE];
    emp[0] = &v;
    emp[1] = &eh;
    emp[2] = &g;
    emp[3] = &c;
    emp[4] = &s;
    //Otra manera de invocar imprimirDatos
    //imprimirDatos(&v);
    //imprimirDatos(emp[1]);
    //imprimirDatos(emp[2]);
    for(unsigned int i=0; i<SIZE; i++) {   //Gerente imprimimos de otra manera en la linea 38
        imprimirDatos(emp[i]);
    }
    return 0;
}
