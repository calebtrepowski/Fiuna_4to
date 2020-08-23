#ifndef CAMION_H
#define CAMION_H

#include "Vehiculo.h"

namespace alquiler {
  class Camion : public Vehiculo
  {
    public:
      Camion();
      Camion(std::string, int);
      virtual ~Camion();

      int GetnumEjes() { return numEjes; }
      void SetnumEjes(int val) { numEjes = val; }

      int alquilar();
      std::string toString();
    protected:

    private:
      int numEjes;
  };
}
#endif // CAMION_H
