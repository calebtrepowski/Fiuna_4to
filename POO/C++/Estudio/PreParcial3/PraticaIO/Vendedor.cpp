#define enter '\n'
#include "Vendedor.h"

Vendedor::Vendedor(int cod, string nom, string zone)
{
    codigo = cod;
    nombre = nom;
    zona = zone;
    for(int i=0; i<12; i++){
        ventas[i]=0;
    }
}

Vendedor::~Vendedor()
{
    //dtor
}

void Vendedor::generarVentas() {
            srand (time(NULL));
            for(int i=0; i<MESES; i++) {
                ventas[i] = (rand() % 1000)*9000 + 1000000;
            }
}

const string Vendedor::ZONAS[] = {
"Asuncion", "Encarnacion", "CDE", "Misiones", "Guaira" };


ostream& operator<<(ostream& os, const Vendedor& v){

   os << v.codigo << enter;

   string nombre = v.nombre;
   bool ban = true;
   while(ban) {
      ban = false;
      size_t pos = nombre.find(" ", 0);
      if (pos != string::npos) {    //encontró
        nombre.replace(pos, string(" ").length(), "_");
        ban = true;
      }
   }
   os << nombre << enter;
   os << v.zona << enter;
   for(int i=0; i<v.MESES; i++) {
      os << v.ventas[i] << enter;
   }
   //os << "----------" << enter;
   return os;
}

istream& operator>>(istream& is, Vendedor& v) {
    string nombre;
    is >> v.codigo;
    is >> nombre;

    bool ban = true;
    while(ban) {
      ban = false;
      size_t pos = nombre.find("_", 0);
      if (pos != string::npos) {
        nombre.replace(pos, string("_").length(), " ");
        ban = true;
      }
    }
    v.nombre = nombre;
    is >> v.zona;
    for(int i=0; i<v.MESES;i++){
        is >> v.ventas[i];
    }
    return is;
}
