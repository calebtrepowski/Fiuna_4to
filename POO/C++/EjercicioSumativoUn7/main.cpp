#include <iostream>
#include "Auto.h"
#include "Camion.h"
using namespace std;
using namespace alquiler;
int main()
{
    Vehiculo* alqui[2];
    alqui[0]=new Auto("ABC123",1400);
    alqui[1]=new Camion("CBA321",5);
    system("color 1B");
    cout<<"*************************************************************\n";
    cout<<"************************* ALQUILER **************************\n";
    cout<<"*************************************************************\n";
    cout<<"\ntoString() Auto: "<<alqui[0]->toString();
    cout<<"\ntoString() Camion: "<<alqui[1]->toString();
    cout<<"\nAlquiler Auto: "<<alqui[0]->alquilar();
    cout<<"\nAlquiler Camion: "<<alqui[1]->alquilar();
    system("pause>0");
    return 0;
}
