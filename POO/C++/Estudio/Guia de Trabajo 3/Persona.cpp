#include "Persona.h"

Persona::Persona() {
  cedula = 0;
  nombre = "NN";
  apellido = "AA";
}

Persona::Persona(int _cedula,std::string _nombre,
    std::string _apellido)
{
  cedula = _cedula;
  nombre = _nombre;
  apellido = _apellido;
}

Persona::~Persona()
{
}

std::string Persona::toString() {
  std::stringstream ss;
  ss << "\nCedula: " << cedula << "\nNombre: " << nombre
    << "\nApellido: " << apellido << '\n';
  return ss.str();
}

void Persona::comer(std::string comida, float cantidad)
{
  std::cout << "\n" << nombre << " " << apellido << " comiendo "
    << cantidad << " kg de " << comida << ".\n";
}
