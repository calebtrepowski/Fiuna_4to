#ifndef MATERIA_H
#define MATERIA_H
#include <iostream>
#include <sstream>

class Materia
{
  public:
    Materia();
    Materia(std::string nombre);
    virtual ~Materia();

    std::string getnombre() {return nombre;}
    void setnombre(std::string _nombre) {nombre = _nombre;}

    int getnota() {return nota;}
    void setnota(int _nota) {nota = _nota;}
    
    std::string toString();
  protected:

  private:
  std::string nombre;
  int nota;
};

#endif // MATERIA_H
