% ********************************************************
% ======== PROGRAMA HECHO EN GNU OCTAVE v5.2.0 ==========
% Metodos Numericos, FIUNA, 4to semestre Ing Mecatronica
% Alumno: CALEB TREPOWSKI CASTILLO
% ********************************************************

% Tarea 8, Ejercicio 1
% Elabore un programa en MATLAB que resuelva el siguiente
% problema de valor inicial mediante los metodos de Euler,
% Heun y Runge-Kutta de orden 4. El programa debe devolver
% además en pantalla la gráfica de la solución obtenida por
% todos los metodos.
% y' = e^-2t - 2y con y(0) = 0.1 en [0,3]
clear
clc

df = @(t,y) (exp(-2*t) - 2*y);
a = 0;
b = 3;
M = 50; %subintervalos
h = (b - a)/M;

t = a:h:b;

%euler
ye(1) = 0.1;
%heun
yh(1) = 0.1;
p(1) = 0.1;
%rk4
yr(1) = 0.1;

for k = 1:M
	%euler	
	ye(k+1) = ye(k) + h*df(t(k),ye(k));
	%heun
	p(k+1) = yh(k) + h*df(t(k),yh(k));
	yh(k+1) = yh(k) + (h/2)*( df(t(k),yh(k)) + df(t(k+1),p(k+1)) );
	%rk4
	f1 = df(t(k),yr(k));
  f2 = df(t(k) + h/2,yr(k)+h/2*f1);
  f3 = df(t(k) + h/2,yr(k)+h/2*f2);
  f4 = df(t(k) + h,yr(k) + h*f3);
  yr(k+1) = yr(k) + (h/6)*(f1+2*f2+2*f3+f4);
end

taux = a:1e-3:b;

hold off
figure(1)
plot(t,ye,'r',t,yh,'k',t,yr,'b');
legend("euler","heun","rk4")