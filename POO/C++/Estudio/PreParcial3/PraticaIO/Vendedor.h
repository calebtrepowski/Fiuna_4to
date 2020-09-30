#define enter '\n'
#define tab '\t'
#ifndef VENDEDOR_H
#define VENDEDOR_H
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>

using namespace std;

class Vendedor
{
    public:
        static const int MESES = 12;
        static const string ZONAS[5];
        /** Default constructor */
        Vendedor(){}
        Vendedor(int cod, string nom, string zone);
        /** Default destructor */
        virtual ~Vendedor();
        /** Access codigo
         * \return The current value of codigo
         */
        int Getcodigo() { return codigo; }
        /** Set codigo
         * \param val New value to set
         */
        void Setcodigo(int val) { codigo = val; }
        /** Access nombre
         * \return The current value of nombre
         */
        string Getnombre() { return nombre; }
        /** Set nombre
         * \param val New value to set
         */
        void Setnombre(string val) { nombre = val; }
        /** Access zona
         * \return The current value of zona
         */
        string Getzona() { return zona; }
        /** Set zona
         * \param val New value to set
         */
        void Setzona(string val) { zona = val; }

        void generarVentas();
        int Getventa(int index)  { return ventas[index]; }
        int *Getventas()  { return ventas; }
    private:
        int codigo; //!< Member variable "codigo"
        string nombre; //!< Member variable "nombre"
        string zona; //!< Member variable "zona"
        int ventas[12];//!< Member variable "zona"

    friend ostream& operator<<(ostream& os, const Vendedor& s);
    friend istream& operator>>(istream& is, Vendedor& s);
};


#endif // VENDEDOR_H
