#ifndef NUMEROTELEFONICO_H
#define NUMEROTELEFONICO_H
#include <iostream>
using namespace std;
class NumeroTelefonico
{
public:
    NumeroTelefonico();
    NumeroTelefonico( string codArea, string codOper, string linea );
    virtual ~NumeroTelefonico();

    friend ostream &operator << ( ostream &os, NumeroTelefonico &n );
    friend istream &operator >> ( istream &is, NumeroTelefonico &n );
protected:

private:
    string codigoArea;
    string codigoOperadora;
    string linea;
};

#endif // NUMEROTELEFONICO_H
