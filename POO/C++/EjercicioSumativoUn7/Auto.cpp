#include "Auto.h"

alquiler::Auto::Auto() : alquiler::Vehiculo::Vehiculo()
{
  cilindrada = 1;
}

alquiler::Auto::Auto(std::string _chapa, int _cilindrada) :
  alquiler::Vehiculo::Vehiculo(_chapa)
{

  cilindrada = _cilindrada;
}

alquiler::Auto::~Auto()
{
  //dtor
}

int alquiler::Auto::alquilar()
{
  return cilindrada*500;
}

std::string alquiler::Auto::toString()
{
  std::ostringstream aux;
  aux << "\nChapa: " << alquiler::Vehiculo::Getchapa();
  aux << "\nCilindrada: " << cilindrada;
  return aux.str();
}
