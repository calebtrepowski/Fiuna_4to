#ifndef BOVINO_H
#define BOVINO_H

#include "Animal.h"


// CALEB TREPOWSKI CASTILLO
// 4635928

class Bovino : public Animal
{
  public:
    Bovino();
    Bovino(float _peso, std::string _especie, int _codigo,
      std::string _genero);
    virtual ~Bovino();

    int Getcodigo() { return codigo; }
    void Setcodigo(int val) { codigo = val; }
    std::string Getgenero() { return genero; }
    void Setgenero(std::string val) { genero = val; }

    void correr();
    void comer();
    void caminar();

    std::string toString();

  protected:

  private:
    int codigo;
    std::string genero;
};

#endif // BOVINO_H
