#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <ctime>

#include "Fecha.h"
#include "NumeroTelefonico.h"
using namespace std;

class Persona
{
public:
    Persona();
    Persona( int _cedula, string PA, string SA, string PN, Fecha FN,
             NumeroTelefonico TC );

    virtual ~Persona();

    int calcularEdad();
    string getPrimerApellido() const { return primerApellido; }
    string getSegundoApellido() const { return segundoApellido; }
    string getPrimerNombre() const { return primerNombre; }
    string getSegundoNombre() const { return segundoNombre; }
    int getCedula() const { return cedula; }
    Fecha getFechaNacimiento() { return fechaNacimiento; }
    NumeroTelefonico getTelefonoCasa() const { return telefonoCasa; }
    NumeroTelefonico getTelefonoMovil() const { return telefonoMovil; }
    NumeroTelefonico getTelefonoOficina() const { return telefonoOficina; }

    void setPrimerApellido( string val ) {primerApellido = val;}
    void setSegundoApellido( string val ) {segundoApellido = val;}
    void setPrimerNombre( string val ) {primerNombre = val;}
    void setSegundoNombre( string val ) {segundoNombre = val;}
    void setCedula( int val ) {cedula = val;}
    void setFechaNacimiento( Fecha val ) {fechaNacimiento = val;}
    void setTelefonoCasa( NumeroTelefonico val ) {telefonoCasa = val;}
    void setTelefonoMovil( NumeroTelefonico val ) {telefonoMovil = val;}
    void setTelefonoOficina( NumeroTelefonico val ) {telefonoOficina = val;}

protected:

private:
    string primerApellido, segundoApellido, primerNombre, segundoNombre;
    int cedula;
    Fecha fechaNacimiento;
    NumeroTelefonico telefonoCasa, telefonoMovil, telefonoOficina;
    friend ostream &operator<<( ostream &os, Persona &p );
};

#endif // PERSONA_H
