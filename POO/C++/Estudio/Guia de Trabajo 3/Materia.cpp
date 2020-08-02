#include "Materia.h"

Materia::Materia()
{
  nota = 0;
  nombre = "MM";
}

Materia::Materia(std::string _nombre)
{
  nota = 0;
  nombre = _nombre;
}

Materia::~Materia()
{
  //dtor
}

std::string Materia::toString()
{
  std::stringstream ss;
  ss << "\nMateria: " << nombre << "\nNota: " << nota << '\n';
  return ss.str();
}