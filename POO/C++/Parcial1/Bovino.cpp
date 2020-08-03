#include "Bovino.h"

// CALEB TREPOWSKI CASTILLO
// 4635928

Bovino::Bovino(): Animal()
{
  codigo = 0;
  genero = "GG";
}

Bovino::Bovino(float _peso, std::string _especie, int _codigo,
      std::string _genero)
{
  Animal::Setpeso(_peso);
  Animal::Setespecie(_especie);
  codigo = _codigo;
  genero = _genero;
}


Bovino::~Bovino()
{
  //dtor
}

void Bovino::correr()
{
  if(Getpeso() - Getpeso()*.02 > 0)
  {
    Setpeso(Getpeso() - Getpeso()*.02);
  } else
  {
    Setpeso(0);
  }

}

void Bovino::comer()
{
  if(genero == "hembra")
  {
    if(Getpeso() > 0)
    {
      Setpeso(Getpeso() + Getpeso()*0.5);
    } else {
      Setpeso(3);
    }
  }
}

void Bovino::caminar()
{
  if(genero == "macho")
  {
    if(Getpeso() - Getpeso()*0.2 > 0)
    {
      Setpeso(Getpeso() - Getpeso()*0.2);
    } else
    {
      Setpeso(0);
    }

  }
}

std::string Bovino::toString()
{
  std::ostringstream oss;
  oss << Animal::toString() << "\nCodigo: " << codigo <<
    "\nGenero: " << genero;
  return oss.str();
}
