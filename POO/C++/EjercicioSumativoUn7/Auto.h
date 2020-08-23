#ifndef AUTO_H
#define AUTO_H

#include "Vehiculo.h"

namespace alquiler {
  class Auto : public Vehiculo
  {
    public:
      Auto();
      Auto(std::string, int);
      virtual ~Auto();

      int Getcilindrada() { return cilindrada; }
      void Setcilindrada(int val) { cilindrada = val; }

      int alquilar();
      std::string toString();
    protected:

    private:
      int cilindrada;
  };
}
#endif // AUTO_H
