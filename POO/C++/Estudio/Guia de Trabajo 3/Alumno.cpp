#include "Alumno.h"

Alumno::Alumno()
{
  Persona();
  carrera = "CC";
  cantMat = 0;
}

Alumno::Alumno(int ced, std::string nom, std::string ape,
      std::string car):Persona(ced,nom,ape)
{
//  Persona::setcedula(ced);
//  Persona::setnombre(nom);
//  Persona::setapellido(ape);
  carrera = car;
}

Alumno::~Alumno()
{
  //dtor
}

void Alumno::darExamen(std::string mat)
{
  for(unsigned int i=0;i<cantMat;i++)
  {
    if((materias+i)->getnombre() == mat){
      (materias+i)->setnota(rand()%5 + 1);
    }
  }
}

std::string Alumno::toString()
{
  std::stringstream ss;
  ss << Persona::toString() << "Carrera: " << carrera <<
    "\nMaterias: ";
  for (unsigned int i=0; i<cantMat;i++)
  {
    ss << (materias+i)->getnombre() << ", " << (materias+i)
      ->getnota() << "; ";
  }
  return ss.str();
}
