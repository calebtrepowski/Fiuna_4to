% ********************************************************
% ======== PROGRAMA HECHO EN GNU OCTAVE v5.2.0 ==========
% Metodos Numericos, FIUNA, 4to semestre Ing Mecatronica
% Alumno: CALEB TREPOWSKI CASTILLO
% ********************************************************

% Tarea 2, Ejercicio 1
% Elabore una funcion en MATLAB que resuelva un sistema de
% ecuaciones lineales de N×N por el metodo de Gauss-Jordan

function [X] = gauss_jordan(A,b)
	% A debe ser una matriz NxN
	% b debe ser un vector columna de N elementos
	
	epsilon = 0.01;
	if abs(det(A)) < epsilon
		error('El determinante es cero.')
 	end
	
	n = length(A);
	ampliada = [A b];
	
	for i=1:n-1
		if ampliada(i,i) == 0
			for j=i+1:n
				if ampliada(j,i) ~= 0
					temp = ampliada(i,:);
					ampliada(i,:) = ampliada(j,:);
					ampliada(j,:) = temp;
				else
					error('El determinante es cero.')
				end
   		end
		else
			if i==1 
				ampliada(i,:) = ampliada(i,:)/ampliada(i,i);
			end
			for j=i+1:n
				%mult = ampliada(j,i)/ampliada(i,i);
				mult = ampliada(j,i);
				ampliada(j,:) = ampliada(j,:) - mult.*ampliada(i,:);
				if j>i+1
					continue	
    		end
				ampliada(j,:) = ampliada(j,:)/ampliada(j,j);
				for k=1:j-1
					mult = ampliada(k,j);
					ampliada(k,:) = ampliada(k,:) - mult.*ampliada(j,:);
				end
			end
		end
 	end
	
	%%%%%%%%%%%%%%%%%%%%%
##	for i=n:-1:2
##		if ampliada(i,i) ~= 0
##			for j=i-1:-1:1
##				mult = ampliada(j,i)/ampliada(i,i);
##				ampliada(j,:) = ampliada(j,:) - mult.*ampliada(i,:);
##   			end
##			ampliada(i,:) = (1/ampliada(i,i)).*ampliada(i,:);
##		end
## 	end
	X = ampliada(:,n+1);
end

