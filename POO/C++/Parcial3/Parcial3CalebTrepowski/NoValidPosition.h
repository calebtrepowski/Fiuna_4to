#ifndef NOVALIDPOSITION_H
#define NOVALIDPOSITION_H

#include <exception>
/**
	 Alumno: Caleb Trepowski Castillo
	 CI: 4635928
 */
class NoValidPosition : public std::exception
{
	public:
		const char* what() const throw()
		{
			return "Error: La posicion no es valida.\n";
		}
};

#endif // NOVALIDPOSITION_H
