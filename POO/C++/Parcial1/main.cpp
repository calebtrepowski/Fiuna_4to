#include <iostream>
#include "Animal.h"
#include "Bovino.h"

//CALEB TREPOWSKI CASTILLO
//4635928
int main()
{
  Animal a1;
  Animal a2(58.8,"vaca");
  std::cout << a1.toString();
  std::cout << a2.toString();
  Bovino b1;
  Bovino b2(36.6,"caballo",41,"macho");
  Bovino b3(36.6,"caballo",41,"hembra");
  std::cout << b1.toString();
  std::cout << b2.toString();
  a1.comer();
  a2.caminar();
  b1.caminar();
  b2.caminar();
  b3.correr();

  std::cout << "\na1 comiendo";
  std::cout << "\na2 caminando";
  std::cout << "\nb1 caminando";
  std::cout << "\nb2 caminando";
  std::cout << "\nb3 corriendo";
  std::cout << a1.toString();
  std::cout << a2.toString();
  std::cout << b1.toString();
  std::cout << b2.toString();
  std::cout << b3.toString();
  return 0;
}
