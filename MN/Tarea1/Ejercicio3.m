% ********************************************************
% ======== PROGRAMA HECHO EN GNU OCTAVE v5.2.0 ==========
% Metodos Numericos, FIUNA, 4to semestre Ing Mecatronica
% Alumno: CALEB TREPOWSKI CASTILLO
% ********************************************************

% Tarea 1, Ejercicio 3
%Demuestre que la siguiente formula de iteracion nos permite
%hallar la raiz cubica de un numero real N cualquiera:
%pk+1 =(2*pk + N/pk^2)/3
%Posteriormente, elabore un programa en MATLAB que halle la
%raiz cubica de cualquier numero real N con la formula
%propuesta anteriormente.
format long
% reemplazar N por el numero del que se desea obtener la
% raiz cubica
N = 1; 

iter_max = 50;
err = 1e-5;

p0 = N/3; %chute inicial considerado para todo N.
p = [p0];

for i = 1:iter_max
  p(i+1) = (2*p(i) + N/(p(i)^2))/3;
  if abs((p(i+1)-p(i))/p(i+1)) < err || abs(p(i+1)-p(i)) < err
	%criterios de error absoluto y relativo por separado para
	%poder trabajar tanto con numeros grandes y numeros chicos
    break
  end
end

p(length(p)) %imprimir el resultado