#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include <iostream>
using namespace std;

#include <string>  //usaremos la clase string estandar de c++
#include <sstream> //para usar la clase ostringstream

using std::string;
using std::ostringstream;

namespace archivos {

class Persona {
  private:  //por defecto es private
    int cedula;
      string nombre;
      string apellido;

  public:
        /**
        Constructor de la clase Persona
           Los datos miembros no se incializan en ningun valor por defecto
           por eso cargamos valores por defecto a cada propiedad
        */
     Persona() {
         cedula = 0;
         nombre = "?";
         apellido = "?";
     }

     Persona(int ced, string nom, string ape){
        cedula = ced;  //se puede asignar directam
        setNombre(nom);
        setApellido(ape);
     }
     virtual ~Persona() {
        cout << "Destruyendo Persona con CI " << cedula << endl;
     }
     void setCedula(int ced){
        if (ced < 0) ced = 0;
        cedula = ced;
    }
     void setNombre(string nom){ nombre = nom; }
     void setApellido(string ape){ apellido = ape; }

     int    getCedula() const   { return cedula; }
     string getNombre() const   { return nombre; }
     string getApellido() const { return apellido; }

    string toString() {
         ostringstream s;
         s << cedula << " " << nombre
         << " " << apellido;
         return s.str();
     }

     virtual void comer(){
         cout << "Comiendo en Persona" << endl;
     }
}; //fin clase Persona

}  //namespace
#endif // PERSONA_H_INCLUDED
