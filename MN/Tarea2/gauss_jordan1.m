% ********************************************************
% ======== PROGRAMA HECHO EN GNU OCTAVE v5.2.0 ==========
% Metodos Numericos, FIUNA, 4to semestre Ing Mecatronica
% Alumno: CALEB TREPOWSKI CASTILLO
% ********************************************************

% Tarea 2, Ejercicio 1
% Elabore una funcion en MATLAB que resuelva un sistema de
% ecuaciones lineales de N×N por el metodo de Gauss-Jordan

function [X] = gauss_jordan1(A,b)
	
	epsilon = 1e-5;
	%consideramos arbitrariamente que cualquier numero menor a epsilon es 0
	amp = [A b];
	[m n] = size(amp);
	
	cortar = false;
	
	%i fila actual de pivoteamiento
	for i=1:m
		
		if amp(i,i) == 0
			[mayor, pos] = max(abs(amp(i:m,i)));
			%buscamos un valor no nulo en la columna i para que sea el pivot.
			%en este caso, buscamos el de mayor valor absoluto
			
			if mayor < epsilon
				cortar = true;
				break
			else
				amp([i pos-1+i],i:n) = amp([pos-1+i i],i:n);
				%intercambio de filas
			end
		end
		if cortar == false
			amp(i,i:n) = amp(i,i:n)/amp(i,i);
			%dividimos la fila del pivot por el valor de este, asi el multiplicador
			%para cada fila pasa a ser el elemento i en cada fila directamente
			
			eliminar = [1:i-1,i+1:m];
			%filas a escalonar, las primeras para la parte superior
			%y las segundas para la parte inferior
			
			amp(eliminar,i:n) = amp(eliminar,i:n) - amp(eliminar,i).*amp(i,i:n);
			%escalonamos las filas con el pivot
		end
 	end
	if cortar
		error('La matriz no es invertible');
	else
		X = amp(:,n);	
	end
end
