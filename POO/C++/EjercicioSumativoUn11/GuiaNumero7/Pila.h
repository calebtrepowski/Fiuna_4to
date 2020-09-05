#ifndef PILA_H
#define PILA_H
#include "Nodo.h"
#include "PilaVacia.h"

template <class T2>
class Pila
{
	public:
		Pila()
		{
			primero = 0;
			tamano = 0;
		}
		virtual ~Pila() {}

		void insertar(T2 dat)
		{
			Nodo<T2> *n = new Nodo<T2>(dat);
			n->sgt = primero;
			primero = n;
			tamano++;
		}
		T2 eliminar() throw(PilaVacia)
		{
			if(tamano != 0)
			{
				Nodo<T2> *aux;
				aux = primero->sgt;
				//delete *primero;
				primero = aux;
				tamano--;
			}
			else throw PilaVacia();
		}
		T2 ver() const throw (PilaVacia)
		{
			if(tamano != 0)
			{
				return primero->dato;
			}
			else throw PilaVacia();
		}
		int buscar(T2 dato) const
		{
			unsigned int i = tamano-1;
			Nodo<T2> *aux = primero;
			for( ; i>=0; i--)
			{
				if (aux->dato == dato)
				{
					return i;
				} else
				{
					aux = aux->sgt;
				}
			}
			return -1;
		}
		int dimension() const
		{
			return tamano;
		}
		bool estaVacio() const
		{
			if(tamano == 0) return true;
			else return false;
		}
	protected:

	private:
		Nodo<T2> *primero;
		unsigned int tamano;
};

#endif // PILA_H
