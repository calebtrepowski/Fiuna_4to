#include "Prestamo.h"
//TODO implementar todo
Prestamo::Prestamo( Persona &_solicitante, int _numero, double _valor,
                    vector<Cuota> _cuotas, Fecha _fechaSolicitud, Fecha _fechaAprobacion )
{
    Solicitante = _solicitante;
    numero = _numero;
    if( _valor >= 500000 )
    {
        valor = _valor;
    }
    else
    {
        valor = 0;
        cout << "El valor no puede ser negativo ni menor a 500.000\n";
    }

}

Prestamo::~Prestamo()
{
    //dtor
}
