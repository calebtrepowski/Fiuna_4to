#include "Vehiculo.h"

alquiler::Vehiculo::Vehiculo()
{
  chapa = "NNN";
}

alquiler::Vehiculo::Vehiculo(std::string _chapa)
{
  chapa = _chapa;
}

alquiler::Vehiculo::~Vehiculo()
{
  //dtor
}
std::string alquiler::Vehiculo::toString()
{
  std::ostringstream aux;
  aux << "\nChapa: " << chapa;
  return aux.str();
}
