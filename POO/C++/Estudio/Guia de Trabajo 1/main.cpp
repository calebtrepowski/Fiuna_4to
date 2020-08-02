#include <iostream>
#include "Persona.h"

int main()
{
  Persona p1;
  std::cout << '\n' << p1.getcedula();
  std::cout << '\n' << p1.getnombre();
  std::cout << '\n' << p1.getapellido() << '\n';
  p1.setcedula(123456);
  p1.setnombre("Juanca");
  p1.setapellido("Carrillo");
  std::cout << p1.toString();
  Persona p2(3214567,"Joseca","Rios");
  std::cout << p2.toString();

  Persona *p3, *p4;
  p3 = new Persona();
  p4 = new Persona(3216547,"Korea","Gonzalez");

  p3->setcedula(7894563);
  p3->setnombre("LaRubia");
  p3->setapellido("Marin");

  p4->setapellido("Ying");

  std::cout << p3->toString() << p4->toString();
  p2.comer("Tallarin",0.5);
  p4->comer("Asado",0.2);
  return 0;
}
