#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Empleado.h"

namespace rrhh {
	class Supervisor : public Empleado
	{
		const static float SOBRE_SUELDO = Empleado::SALARIO_MIN/2;
		public:

			Supervisor();
			Supervisor(int ced, string nom, string ape,
									unsigned int sal, string depto);
			virtual ~Supervisor();

			string toString();

			int calcularSalario();
			void comer(string comida, float cantidad);
			void trabajar();
			void descansar();
			string cobrarSalario();

		protected:

		private:
	};
}


#endif // SUPERVISOR_H
