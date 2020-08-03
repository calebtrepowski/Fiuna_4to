#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <sstream>


// CALEB TREPOWSKI CASTILLO
// 4635928

class Animal
{
  public:
    Animal();
    Animal(float _peso, std::string _especie);
    virtual ~Animal();

    float Getpeso() { return peso; }
    void Setpeso(float val) { peso = val; }
    std::string Getespecie() { return especie; }
    void Setespecie(std::string val) { especie = val; }

    virtual void comer();
    virtual void caminar();

    std::string toString();

  protected:

  private:
    float peso;
    std::string especie;
};

#endif // ANIMAL_H
