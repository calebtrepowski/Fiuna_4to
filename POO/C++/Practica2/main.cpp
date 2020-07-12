#include <iostream>
#include "Vehiculo.h"

using namespace std;

int main()
{
    float aux,aux2;
    Vehiculo v1("Toyota","Verde");
    cout<<v1.ToString();

    cout<<"\nCargar combustible: \nIntroduzca cantidad a cargar: ";
    cin>>aux;
    cout<<"\nEl costo es "<<v1.cargarCombustible(aux)<<endl;

    cout<<v1.ToString();

    return 0;
}
