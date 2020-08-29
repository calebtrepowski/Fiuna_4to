#ifndef COBRADOR_H
#define COBRADOR_H

#include "Empleado.h"

namespace rrhh{
	class Cobrador : public Empleado
	{
		const static float COMISION_MIN = 2.0;
		public:
			Cobrador();
			Cobrador(int ced, string nom, string ape,
								unsigned int monto, float _comision);
			virtual ~Cobrador();

			float Getcomision() { return comision; }
			void Setcomision(float val) { comision = val; }
			int GetmontoCobrado() { return montoCobrado; }
			void SetmontoCobrado(int val) { montoCobrado = val; }

			int calcularSalario();
			void comer(string comida, float cantidad);
			void trabajar();
			void descansar();
			std::string cobrarSalario();

			std::string toString();
		protected:

		private:
			float comision;
			int montoCobrado;
	};
}


#endif // COBRADOR_H
