#include "Cuota.h"

Cuota::Cuota( Fecha FV, double mont, double inte )
{
    FechaVencimiento = FV;
    monto = mont;
    interes = inte;
    estado = false;
}

Cuota::~Cuota() {}

double Cuota::verMontoHastaFecha( Fecha f )
{
    double interesPorMora = 0;

    if( f - FechaVencimiento > 0 )
    {
        interesPorMora = 0.01 * ( monto / interes ) * ( f - FechaVencimiento );
    }

    return ( monto / interes ) + ( monto / 100 ) + interesPorMora;
}

double Cuota::cobrarCuota()
{
    estado = true;
    time_t now = time( 0 );
    tm *fecha = localtime( &now );
    Fecha fechaHoy( fecha->tm_mday, fecha->tm_mon + 1,
                    fecha->tm_year + 1900 );
    return verMontoHastaFecha( fechaHoy );
}

