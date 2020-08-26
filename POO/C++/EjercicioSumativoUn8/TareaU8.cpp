#include <iostream>
using namespace std;

/*
Defina la funcion generica division y la clase DivisionPorCero exception debajo de esta linea
*/
#include <exception>
class DivisionPorCero : public exception {
	public:
	const char* what() const throw()
	{
		return "Error, divisor igual a cero";
	}
};
template<class T>
T division (T a, T b) throw(DivisionPorCero)
{
	if(b==0)
	{
		throw DivisionPorCero();
	}
	return a/b;
}


int main()
{
    int i=0;
    float f;
    double b, n, d;
    short s;
    cout << "Ingrese el numero y el divisor" << endl;
    cin >> n;
    cin >> d;
    
    //No olvide definir un bloque try-catch
    try {
    f = division<float>(float(n), (float)d);
    cout << n << "/" << d << " = " << f << endl;
    b = division<double>(n, d);
    cout << n << "/" << d << " = " << b << endl;
    i = division<int>((int)n, int(d));
    cout << n << "/" << d << " = " << i << endl;
    s = division<short>(short(n), (short)d);
    cout << n << "/" << d << " = " << s << endl;
    } catch (DivisionPorCero& e) {
		cerr << e.what();
	}
    return 0;
}