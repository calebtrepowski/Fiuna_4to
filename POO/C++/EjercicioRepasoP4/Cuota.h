#ifndef CUOTA_H
#define CUOTA_H
#include "Fecha.h"

#include<ctime>

class Cuota
{
public:
    Cuota( Fecha FV, double mont, double inte );
    virtual ~Cuota();

    double verMontoHastaFecha( Fecha f );
    double cobrarCuota();

protected:

private:
    Fecha FechaVencimiento;
    bool estado;
    double monto, interes;
};

#endif // CUOTA_H
