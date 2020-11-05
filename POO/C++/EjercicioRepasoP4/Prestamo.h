#ifndef PRESTAMO_H
#define PRESTAMO_H

#include <vector>
#include "Persona.h"
#include "Cuota.h"

class Prestamo
{
public:
    Prestamo( Persona &_solicitante, int _numero, double _valor,
              vector<Cuota> _cuotas, Fecha _fechaSolicitud, Fecha _fechaAprobacion );
    virtual ~Prestamo();

    double verMontoCuota();
    double pagarCuota();
    bool imprimir();


protected:

private:
    Persona Solicitante;
    int numero;
    double valor;
    vector<Cuota> cuotas;
    Fecha fechaSolicitud;
    Fecha fechaAprobacion;
};

#endif // PRESTAMO_H
