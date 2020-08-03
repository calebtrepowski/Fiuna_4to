#include "Animal.h"

// CALEB TREPOWSKI CASTILLO
// 4635928

Animal::Animal()
{
  peso = 0;
  especie = "EE";
}

Animal::Animal(float _peso, std::string _especie)
{
  peso = _peso;
  especie = _especie;
}

Animal::~Animal()
{
  //dtor
}

void Animal::comer()
{
  if (peso != 0)
  {
    peso += peso*0.3;
  } else {
    peso += 3;
  }

}

void Animal::caminar()
{
  if (peso - peso*0.15 > 0)
  {
    peso -= peso*0.15;
  } else {
    peso = 0;
  }

}

std::string Animal::toString()
{
  std::ostringstream oss;
  oss << "\n\nEspecie: " << especie << "\nPeso: " << peso;
  return oss.str();
}
