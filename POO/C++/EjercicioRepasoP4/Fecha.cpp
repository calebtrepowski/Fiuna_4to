#include "Fecha.h"

Fecha::Fecha()
{
    anho = 2000;
    mes = 1;
    dia = 1;
}

Fecha::Fecha( int d, int m, int a )
{
    anho = a;
    mes = m;
    dia = d;
}

Fecha::~Fecha() {}

bool Fecha::anhoBisiesto( int a )
{
    return ( a % 4 == 0 && a % 100 != 0 ) || a % 400 == 0;
}

void Fecha::ayudaDecremento()
{
    if( dia == 1 )
    {
        if( mes == 1 )
        {
            anho--;
            mes = 12;
            dia = 31;
        }
        else if( mes == 5 || mes == 7 ||
                 mes == 8 || mes == 10 || mes == 12 )
        {
            mes--;
            dia = 30;
        }
        else if( mes == 3 )
        {
            mes--;

            if( anhoBisiesto( anho ) )
            { dia = 29; }
            else
            { dia = 28; }
        }
        else
        {
            mes--;
            dia = 31;
        }
    }
    else
    { dia--; }
}

void Fecha::ayudaIncremento()
{
    /*si tiene 31*/
    if( mes == 1 || mes == 3 || mes == 5 || mes == 7 ||
            mes == 8 || mes == 10 || mes == 12 )
    {
        if( dia == 31 )
        {
            if( mes == 12 )
            {
                anho++;
                mes = 1;
            }
            else
            { mes++; }

            dia = 1;
        }
        else
        { dia++; }
    }
    /*o si tiene 28 o 29*/
    else if( mes == 2 )
    {
        //tiene 29
        if( anhoBisiesto( anho ) )
        {
            if( dia == 29 )
            {
                mes = 3;
                dia = 1;
            }
            else
            { dia++; }
        }
        /*tiene 28*/
        else
        {
            if( dia == 28 )
            {
                mes = 3;
                dia = 1;
            }
            else
            { dia++; }
        }
    }
    /*o si tiene 30*/
    else
    {
        if( dia == 30 )
        {
            mes++;
            dia = 1;
        }
        else
        { dia++; }
    }
}

void Fecha::establecerFecha( int d, int m, int a )
{
    dia = d;
    mes = m;
    anho = a;
}

Fecha &Fecha::operator--()
{
    this->ayudaDecremento();
    return *this;
}

Fecha &Fecha::operator++()
{
    this->ayudaIncremento();
    return *this;
}

Fecha Fecha::operator--( int )
{
    Fecha aux = *this;
    this->ayudaDecremento();
    return aux;
}

Fecha Fecha::operator++( int )
{
    Fecha aux = *this;
    this->ayudaIncremento();
    return aux;
}

int Fecha::operator-( Fecha f )
{
    Fecha mayor, menor;
    bool isPositive = true;

    if( f.Getanho() == anho && f.Getmes() == mes && f.Getdia() == dia )
    { return 0; }
    else if( f.Getanho() > anho ||
             ( f.Getanho() == anho && f.Getmes() > mes ) ||
             ( f.Getanho() == anho && f.Getmes() == mes && f.Getdia() > dia )
           )
    {
        mayor = f;
        menor = *this;
        isPositive = false;
    }
    else
    {
        mayor = *this;
        menor = f;
    }

    int dias = 0;

    while(
        !( mayor.Getanho() == menor.Getanho() &&
           mayor.Getmes() == menor.Getmes() &&
           mayor.Getdia() == menor.Getdia() )
    )
    {
        mayor.ayudaDecremento();
        dias++;
    }

    if( isPositive )
    { return dias; }
    else
    { return -dias; }
}

Fecha &Fecha::operator-=( int a )
{
    while( a > 0 )
    {
        this->ayudaDecremento();
        a--;
    }

    return *this;
}

Fecha &Fecha::operator+=( int a )
{
    while( a > 0 )
    {
        this->ayudaIncremento();
        a--;
    }

    return *this;
}

ostream &operator<<( ostream &os, const Fecha &f )
{
    os << f.Getdia() << '/' << f.Getmes() << '/' << f.Getanho() << '\n';
    return os;
}
istream &operator>>( istream &is, Fecha &f )
{
    cout << "Introduzca la fecha (DD MM AAAA):\n";
    int dd, mm, aa;
    is >> dd >> mm >> aa;
    f.establecerFecha( dd, mm, aa );
    return is;
}
