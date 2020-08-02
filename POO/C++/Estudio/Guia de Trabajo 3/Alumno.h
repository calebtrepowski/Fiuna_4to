#ifndef ALUMNO_H
#define ALUMNO_H
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include "Persona.h"
#include "Materia.h"

class Alumno: public Persona
{
  private:
    std::string carrera;
    unsigned int cantMat;
    Materia* materias;
  public:
    Alumno();
    Alumno(int ced, std::string nom, std::string ape,
      std::string car);
    virtual ~Alumno();

    std::string getcarrera() {return carrera;}
    void setcarrera(std::string _carrera) {carrera = _carrera;}

    unsigned int getcantMat() {return cantMat;}
    void setcantMat(unsigned int _cantMat) {cantMat = _cantMat;}

    Materia* getmaterias() {return materias;}
    void setmaterias(Materia* _materias) {materias = _materias;}

    void darExamen(std::string mat);

    std::string toString();
  protected:


};

#endif // ALUMNO_H
