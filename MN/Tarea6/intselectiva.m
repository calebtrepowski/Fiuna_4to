% ********************************************************
% ======== PROGRAMA HECHO EN GNU OCTAVE v5.2.0 ==========
% Metodos Numericos, FIUNA, 4to semestre Ing Mecatronica
% Alumno: CALEB TREPOWSKI CASTILLO -- CI: 4635928
% ********************************************************

% Tarea 6, Ejercicio 2
% Elabore una funcion en matlab (de nombre intselectiva) que reciba
% como parametros de entrada:
% 1. Los limites de integracion
% 2. La funcion a integrar
% 3. El numero de nodos de integracion a utilizar
% El programa debe elegir entre aplicar el metodo compuesto del
% trapecio (si la cantidad de subintervalos es impar) o el metodo
% compuesto de Simpson (si la cantidad de subintervalos es par).
% Finalmente el programa debe imprimir en pantalla el valor de la
% integral y el metodo utilizado. Por ejemplo,
% El valor de la integral es 2.4645 a partir del metodo del trapecio
% compuesto.


function intselectiva(a,b,f,N)
	format long
	%a,b: limites inferior y superior respectivamente de integracion.
	%f: funcion a integrar como funcion anonima
	%N: numero de nodos de integracion a utilizar
	%N-1: numero de subintervalos
	h = (b-a)/(N-1);
	x = a:h:b;
	fx = f(x);
	w = ones(length(x),1);
	
	if mod(N-1,2) == 0
	%aplicamos metodo compuesto de Simpson
		w(2:2:end-1) = 4;
		w(3:2:end-2) = 2;
		I = (h/3)*fx*w;
		display("\nEl valor de la integral es")
		disp(I)
		display("a partir del metodo compuesto de Simpson\n")
	else
	%aplicamos metodo compuesto del trapecio
		w(2:end-1) = 2;
		I = (h/2)*fx*w;
		display("\nEl valor de la integral es")
		disp(I)
		display("a partir del metodo compuesto del trapecio\n")
	end
end
