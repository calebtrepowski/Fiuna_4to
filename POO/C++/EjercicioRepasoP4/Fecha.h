#ifndef FECHA_H
#define FECHA_H

#include <iostream>
using namespace std;

class Fecha
{
public:
    Fecha();
    Fecha( int d, int m, int a );
    virtual ~Fecha();

    bool anhoBisiesto( int a );
    void establecerFecha( int d, int m, int a );

    int Getdia() const {return dia;}
    int Getmes() const {return mes;}
    int Getanho() const {return anho;}
    Fecha &operator -- ();
    Fecha &operator ++ ();
    Fecha operator -- ( int );
    Fecha operator ++ ( int );

    int operator - ( Fecha f );

    Fecha &operator -= ( int );
    Fecha &operator += ( int );

    friend ostream &operator << ( ostream &os, const Fecha &f );
    friend istream &operator >> ( istream &is, Fecha &f );

protected:

private:
    int anho;
    int dia;
    int mes;

    void ayudaDecremento();
    void ayudaIncremento();
};

#endif // FECHA_H
