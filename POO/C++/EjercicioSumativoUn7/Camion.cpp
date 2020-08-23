#include "Camion.h"

alquiler::Camion::Camion() : alquiler::Vehiculo::Vehiculo()
{
  numEjes = 1;
}

alquiler::Camion::Camion(std::string _chapa, int _numEjes) :
  alquiler::Vehiculo::Vehiculo(_chapa)
{
  numEjes = _numEjes;
}

alquiler::Camion::~Camion()
{
  //dtor
}

int alquiler::Camion::alquilar()
{
  return numEjes*600000;
}

std::string alquiler::Camion::toString()
{
  std::ostringstream aux;
  aux << "\nChapa: " << alquiler::Vehiculo::Getchapa();
  aux << "\nNumero de Ejes: " << numEjes;
  return aux.str();
}
