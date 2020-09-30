% ********************************************************
% ======== PROGRAMA HECHO EN GNU OCTAVE v5.2.0 ==========
% Metodos Numericos, FIUNA, 4to semestre Ing Mecatronica
% Alumno: CALEB TREPOWSKI CASTILLO
% ********************************************************

% Tarea 7, Ejercicio 2
% Elabore un programa en MATLAB que resuleva la siguiente
% integral mediante el metodo de integracion de Montecarlo
% -1S1 -3S3 (x^2 + y^2)dxdy
clear
format long
tic
c = -3;
d = 3;
a = -1;
b = 1;

M = 100;
N = 100;
hx = (b-a)/M;
hy = (d-c)/N;

x = a:hx:b;
y = c:hy:d;

f = @(x,y) x^2 + y^2;
fc = 0;
for i = x
	for j = y
		fc += f(i,j);
 	end
end
fc = fc/(M*N);
I = (b-a)*(d-c)*fc;
disp('El valor de la integral es:')
disp(I)