#ifndef VEHICULO_H
#define VEHICULO_H
#include<iostream>
#include<sstream>
#include<cstdlib>

namespace alquiler {
  class Vehiculo
  {
    public:
      Vehiculo();
      Vehiculo(std::string);
      virtual ~Vehiculo();

      std::string Getchapa() { return chapa; }
      void Setchapa(std::string val) { chapa = val; }

      virtual int alquilar() = 0;
      virtual std::string toString();

    protected:

    private:
      std::string chapa;
  };
}
#endif // VEHICULO_H
