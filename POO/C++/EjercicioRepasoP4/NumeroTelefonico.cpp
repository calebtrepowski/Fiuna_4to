#include "NumeroTelefonico.h"

NumeroTelefonico::NumeroTelefonico()
{
    codigoArea="+595";
    codigoOperadora="90";
    linea="0000000";
}

NumeroTelefonico::NumeroTelefonico( string codArea, string codOper,
                                    string lin )
{
    codigoArea = codArea;
    codigoOperadora = codOper;
    linea = lin;
}

NumeroTelefonico::~NumeroTelefonico() {}

ostream &operator << ( ostream &os, NumeroTelefonico &n )
{
    os << n.codigoArea << ' ' << n.codigoOperadora << ' ' << n.linea;
    return os;
}

istream &operator >> ( istream &is, NumeroTelefonico &n )
{
    cout << "Introduzca el numero telefonico(CodigoArea CodigoOperadora Linea):\n";
    string a, o, l;
    is >> a >> o >> l;
    n.codigoArea = a;
    n.codigoOperadora = o;
    n.linea = l;
    return is;
}
