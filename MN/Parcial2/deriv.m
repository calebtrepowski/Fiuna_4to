%***************************************************************
% ============= PROGRAMA HECHO EN GNU OCTAVE 5.2.0 =============
% _______ Alumno: Caleb Trepowski Castillo - CI: 4635928 _______
% Segundo examen parcial, Metodos Numericos, anio 2020
% ------------------------ Tema 2 ------------------------------
% Elabore un programa en MATLAB que grafique la derivada de una
% funcion f(x) dada en un intervalo [a, b] dadas las formulas de
% diferencias progresivas y regresivas.

f = @(x) exp(x).*sin(x);
a = 0;
b = pi;

h = 0.1;
x = a:h:b;
% primer punto, aplicamos diferencias progresivas
D(1) = ( -3*f(x(1)) + 4*f(x(1)+h) - f(x(1)+2*h) )/(2*h);
% ultimo punto, aplicamos diferencias regresivas
D(length(x)) = ( 3*f(x(end))-4*f(x(end)-h) - f(x(end)-2*h) )/(2*h);
for i = 2:length(x)-1
% aplicamos diferencias centradas de orden O(h^2)
	D(i) = ( f(x(i)+h) - f(x(i)-h) ) / (2*h);
end
plot(x,D,'r')
axis ([0 pi -1 1])
hold on
%verificacion mediante ploteado de la derivada analitica
plot(x,exp(x).*(sin(x)+cos(x)),'b')