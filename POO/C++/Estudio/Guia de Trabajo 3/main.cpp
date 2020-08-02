#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Persona.h"
#include "Materia.h"
#include "Alumno.h"


int main()
{
  srand(time(NULL));
  Alumno e1(1234567,"Juanca","Carrillo","Civil");
  e1.comer("Tallarin", 1.5);
  std::cout << "\nCantidad de materias de Alumno e1: ";
  unsigned int aux1;
  std::cin >> aux1;
  e1.setcantMat(aux1);

  Materia _mat[e1.getcantMat()];
  for(int i=0;i<e1.getcantMat();i++)
  {
    std::string aux;
    std::cout << "Nombre de Materia " << i+1 << ": ";
    std::cin >> aux;
    Materia m(aux);
    _mat[i] = m;
  }
  Materia* mat=_mat;
  e1.setmaterias(mat);
  std::cout << e1.toString();
  for (unsigned int i=0; i<e1.getcantMat(); i++)
  {
    e1.darExamen((e1.getmaterias()+i)->getnombre());
  }
  std::cout << e1.toString();
  (e1.getmaterias())->setnota(3);
  std::cout << e1.toString();

  return 0;
}
