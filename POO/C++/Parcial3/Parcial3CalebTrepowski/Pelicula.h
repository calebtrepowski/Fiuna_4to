#ifndef PELICULA_H
#define PELICULA_H
#include <sstream>
using namespace std;

class Pelicula {
    public:
        Pelicula() {}
        Pelicula(string tit, int cod) { anho = cod; titulo = tit; }
        virtual ~Pelicula(){}

        unsigned int Getanho() { return anho; }
        void Setanho(unsigned int val) { anho = val; }
        string Gettitulo() { return titulo; }
        void Settitulo(string val) { titulo = val; }

        bool operator ==(const Pelicula &p) const {
            return anho == p.anho and titulo == p.titulo;
        }
        friend ostream& operator<<(ostream &os, const Pelicula& p);

    private:
        string titulo;
        unsigned int anho;
};
#endif // PELICULA_H
 ostream& operator<<(ostream &os, const Pelicula& p) {
     os <<p.titulo<<" "<<p.anho;
     return os;
 }
