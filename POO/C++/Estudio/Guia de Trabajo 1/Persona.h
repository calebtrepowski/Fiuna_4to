#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <sstream>

class Persona
{
private:
  int cedula;
  std::string nombre;
  std::string apellido;
public:
  Persona();
  Persona(int _cedula,std::string _nombre,
    std::string _apellido);
  ~Persona();

  int getcedula() {return cedula;}
  void setcedula(int _cedula) {cedula = _cedula;}

  std::string getnombre() {return nombre;}
  void setnombre(std::string _nombre) {nombre = _nombre;}

  std::string getapellido() {return apellido;}
  void setapellido(std::string _apellido) {apellido = _apellido;}

  std::string toString();
  void comer(std::string comida, float cantidad);
};

#endif // PERSONA_H