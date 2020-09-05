//#include <iostream>
//
//using namespace std;
//
///* Agregue ColaVacia, Nodo y Cola aqui las clases */
//#include <exception>
//class ColaVacia : public exception
//{
//	public:
//	const char* what() const throw()
//	{
//		return "Error: La cola esta vacia";
//	}
//};
//template <class T>
//class Nodo
//{
//	private:
//	T dato;
//	Nodo* siguiente;
//
//	public:
//	Nodo(T _dato)
//	{
//		dato = _dato;
//		siguiente = 0;
//	}
//	virtual ~Nodo(){}
//	template <class T2> friend class Cola;
//
//};
//template <class T2>
//class Cola
//{
//	private:
//	Nodo<T2> *frente, *ultimo;
//	int tamanho;
//
//	public:
//	Cola()
//	{
//		frente = 0;
//		ultimo = 0;
//		tamanho = 0;
//	}
//	virtual ~Cola(){}
//	void agregar(T2 dato)
//	{
//		Nodo<T2> *n = new Nodo<T2>(dato);
//		if(tamanho == 0)
//		{
//			frente = n;
//			ultimo = n;
//		} else
//		{
//			ultimo->siguiente = n;
//			ultimo = n;
//		}
//		tamanho++;
//	}
//	T2 eliminar() throw (ColaVacia)
//	{
//		if(tamanho > 0)
//		{
//			T2 aux = frente->dato;
//			frente = frente->siguiente;
//			tamanho--;
//			return aux;
//		} else
//		{
//			throw ColaVacia();
//		}
//	}
//	T2 ver() const throw(ColaVacia)
//	{
//		if(tamanho > 0)
//		{
//			return frente->dato;
//		} else
//		{
//			throw ColaVacia();
//		}
//	}
//	int buscar(T2 dato)
//	{
//		int i = 0;
//		Nodo<T2>* aux = frente;
//		for(;i<tamanho;i++)
//		{
//			if(aux->dato == dato)
//			{
//				return i+1;
//			}
//			aux = aux->siguiente;
//		}
//		return 0;
//	}
//	int getLongitud() const
//	{
//		return tamanho;
//	}
//	bool esVacia() const
//	{
//		if (tamanho == 0) return true;
//		else return false;
//	}
//};
//
///* No modifique el main o leerLetra */
//
//char leerLetra() {
//    char x;
//    cin >> x;
//    return x;
//}
//
//int main()
//{
//    Cola<char> letras;
//    cout<<"Esta vacia?: ";
//    if (letras.esVacia())
//       cout << "Si" <<endl;
//    else
//       cout << "No. Tiene " << letras.getLongitud() << " letras";
//    try{
//        cout<<"\nSe elimino: "<<letras.eliminar();
//     } catch(ColaVacia &ex){
//        cerr << ex.what();
//    }
//    cout << endl;
//    cout << "Ingrese 7 letras: ";
//    for(int i = 0; i<7; i++) {
//       letras.agregar(leerLetra());
//    }
//
//    cout<<"\nEsta vacia?: ";
//    if (letras.esVacia())
//       cout << "Si" <<endl;
//    else
//       cout << "No. Tiene " << letras.getLongitud() << " letras";
//    cout <<"\nLa 'o' esta en la posicion " << letras.buscar('o');
//
//    cout<<"\nElemento en el frente: " << letras.ver();
//    try{
//        for(int i = 0; i<5; i++) {
//           cout<<"\nSe elimino: "<<letras.eliminar();
//        }
//        cout<<"\nElemento en el frente: " << letras.ver();
//        cout<<"\nEsta vacia?: ";
//        if (letras.esVacia())
//           cout << "Si" <<endl;
//        else
//           cout << "No. Tiene " << letras.getLongitud() << " letras";
//        cout <<"\nLa 'd' esta en la posicion " << letras.buscar('d');
//        cout<<"\nSe elimino: "<<letras.eliminar();
//        cout<<"\nSe elimino: "<<letras.eliminar();
//        cout<<"\nSe elimino: "<<letras.eliminar();
//    }catch(ColaVacia &ex){
//        cerr<<ex.what();
//    }
//
//    cout<<"\nSistema finalizado con exito";
//}

#include <iostream>

using namespace std;

/* Agregue ColaVacia, Nodo y Cola aqui las clases */

#include <exception>
class ColaVacia : public exception
{
    public:
    const char* what() const throw()
    {
        return "Error: La cola esta vacia";
    }
};

template <class T>
class Nodo
{
  private:
  T dato;
  Nodo* siguiente;

  public:
  Nodo(T _dato)
  {
      dato = _dato;
      siguiente = 0;
  }
  virtual ~Nodo(){}
  template <class T2> friend class Cola;
};

template <class T2>
class Cola
{
    private:
    Nodo<T2> *frente, *ultimo;
    int tamanho;

    public:
    Cola()
    {
        frente = 0;
        ultimo = 0;
        tamanho = 0;
    }
    virtual ~Cola(){}
    void agregar(T2 dato)
    {
        Nodo<T2> *n = new Nodo<T2>(dato);
        if(tamanho == 0)
        {
            frente = n;
            ultimo = n;
        } else
        {
            ultimo->siguiente = n;
            ultimo = n;
        }
        tamanho++;
    }
    T2 eliminar() throw(ColaVacia)
    {
        if(tamanho > 0)
        {
            T2 aux = frente->dato;
            frente = frente->siguiente;
            tamanho--;
            return aux;
        } else
        {
            throw ColaVacia();
        }
    }
    T2 ver() const throw(ColaVacia)
    {
        if(tamanho > 0)
        {
            return frente->dato;
        } else
        {
            throw ColaVacia();
        }
    }
    int buscar (T2 dato)
    {
        int i = 0;
        Nodo<T2>* aux = frente;
        for(;i<tamanho;i++)
        {
            if(aux->dato == dato)
            {
                return i+1;
            } else
            {
                aux = aux->siguiente;
            }
        }
        return 0;
    }
    int getLongitud() const
    {
        return tamanho;
    }
    bool esVacia() const
    {
        if(tamanho == 0) return true;
        else return false;
    }
};

/* No modifique el main o leerLetra */

char leerLetra() {
    char x;
    cin >> x;
    return x;
}

int main()
{
    Cola<char> letras;
    cout<<"Esta vacia?: ";
    if (letras.esVacia())
       cout << "Si" <<endl;
    else
       cout << "No. Tiene " << letras.getLongitud() << " letras";
    try{
        cout<<"\nSe elimino: "<<letras.eliminar();
     } catch(ColaVacia &ex){
        cerr << ex.what();
    }
    cout << endl;
    cout << "Ingrese 7 letras: ";
    for(int i = 0; i<7; i++) {
       letras.agregar(leerLetra());
    }

    cout<<"\nEsta vacia?: ";
    if (letras.esVacia())
       cout << "Si" <<endl;
    else
       cout << "No. Tiene " << letras.getLongitud() << " letras";
    cout <<"\nLa 'o' esta en la posicion " << letras.buscar('o');

    cout<<"\nElemento en el frente: " << letras.ver();
    try{
        for(int i = 0; i<5; i++) {
           cout<<"\nSe elimino: "<<letras.eliminar();
        }
        cout<<"\nElemento en el frente: " << letras.ver();
        cout<<"\nEsta vacia?: ";
        if (letras.esVacia())
           cout << "Si" <<endl;
        else
           cout << "No. Tiene " << letras.getLongitud() << " letras";
        cout <<"\nLa 'd' esta en la posicion " << letras.buscar('d');
        cout<<"\nSe elimino: "<<letras.eliminar();
        cout<<"\nSe elimino: "<<letras.eliminar();
        cout<<"\nSe elimino: "<<letras.eliminar();
    }catch(ColaVacia &ex){
        cerr<<ex.what();
    }

    cout<<"\nSistema finalizado con exito";
}

