#ifndef PERSONA_H
#define PERSONA_H

#include <sstream>

namespace RRHH
{
    class Persona
    {
        public:



            Persona(){
                cedula=0;
                nombre="";
                apellido="";
            }

            Persona(int c,std::string n,std::string a){
                cedula=c;
                nombre=n;
                apellido=a;
            }
            virtual ~Persona() {}

            int getCedula(){
                return cedula;
            }

            std::string getNombre(){
                return nombre;
            }

            std::string getApellido(){
                return apellido;
            }

            void setCedula(int c){
                if(c>0)
                    cedula=c;
            }

            void setNombre(std::string n){
                nombre=n;
            }

            void setApellido(std::string a){
                apellido=a;
            }

            std::string toString(){
                std::ostringstream a;
                a<<cedula<<" "<<nombre<<" "<<apellido << '\n';
                return a.str();
            }


        protected:

        private:
            int cedula;
            std::string nombre;
            std::string apellido;
    };
}
#endif // PERSONA_H
