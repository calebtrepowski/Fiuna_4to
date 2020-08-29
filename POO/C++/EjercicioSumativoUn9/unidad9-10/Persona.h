#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <sstream>

using namespace std;

class Persona
{
    public:
        Persona();
        Persona(int, string, string);
        virtual ~Persona();

        int Getcedula() { return cedula; }
        void Setcedula(int ced) { cedula = ced; }
        string Getnombre() { return nombre; }
        void Setnombre(string val) { nombre = val; }
        string Getapellido() { return apellido; }
        void Setapellido(string ape) { apellido = ape; }
        virtual string toString();
        virtual void comer(string nombre ,float cantidad);

    protected:
        int cedula;
        string nombre;
        string apellido;
};

#endif // PERSONA_H
