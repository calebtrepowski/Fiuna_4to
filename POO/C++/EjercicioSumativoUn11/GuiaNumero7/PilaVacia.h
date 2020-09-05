#ifndef PILAVACIA_H
#define PILAVACIA_H

#include <exception>
using namespace std;

class PilaVacia : public exception
{
	public:
		const char* what() const throw()
		{
			return "\nError, la pila esta vacia.\n";
		}

	protected:

	private:
};

#endif // PILAVACIA_H
