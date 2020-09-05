#ifndef NODO_H
#define NODO_H
#include<iostream>
using namespace std;

template <class T>
class Nodo
{
	public:
		Nodo()
		{
			sgt = NULL;
		}
		Nodo(T _dato)
		{
			dato = _dato;
			sgt = NULL;
		}
		virtual ~Nodo(){}
		//cout << "Eliminando nodo";

		template <class T2> friend class Pila;

	protected:

	private:
		T dato;
		Nodo<T>* sgt;
};

#endif // NODO_H
