#include "Persona.h"

Persona::Persona()
{
    cedula = 0;
    primerApellido = "AA1";
    segundoApellido = "AA2";
    primerNombre = "NN1";
    fechaNacimiento = Fecha( 1, 1, 1900 );
    telefonoCasa = NumeroTelefonico( "+595", "90", "0000000" );
}

Persona::Persona( int _cedula, string PA, string SA, string PN, Fecha FN,
                  NumeroTelefonico TC )
{
    cedula = _cedula;
    primerApellido = PA;
    segundoApellido = SA;
    primerNombre = PN;
    fechaNacimiento = FN;
    telefonoCasa = TC;
}

Persona::~Persona() {}

int Persona::calcularEdad()
{
    time_t now = time( 0 );
    tm *fecha = localtime( &now );
    Fecha fechaHoy;
    fechaHoy.establecerFecha( fecha->tm_mday, 1 + fecha->tm_mon,
                              1900 + fecha->tm_year );

    if( fechaNacimiento.Getdia() == fechaHoy.Getdia() &&
            fechaNacimiento.Getmes() == fechaHoy.Getmes() )
    {
        return ( fechaHoy - fechaNacimiento ) / 365 + 1;
    }
    else
    {
        return ( fechaHoy - fechaNacimiento ) / 365;
    }
}

ostream &operator << ( ostream &os, Persona &p )
{
    os << p.getPrimerApellido() << ' ' << p.getSegundoApellido() << ", " <<
       p.getPrimerNombre() << '\n' << p.getCedula() << '\n' <<
       p.getFechaNacimiento() << '\n';
//    os << p.getTelefonoCasa() << '\n';
    return os;
}
