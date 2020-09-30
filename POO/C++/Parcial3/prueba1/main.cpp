#include <iostream>

using namespace std;

template <class T>
class Nodo {

        T dato;

        Nodo<T> *siguiente;

   public:

     Nodo (T d) {   dato = d;    }

     virtual ~Nodo(){ }

     template<class L> friend class Lista;

};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
