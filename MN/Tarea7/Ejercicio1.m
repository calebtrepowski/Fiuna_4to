% ********************************************************
% ======== PROGRAMA HECHO EN GNU OCTAVE v5.2.0 ==========
% Metodos Numericos, FIUNA, 4to semestre Ing Mecatronica
% Alumno: CALEB TREPOWSKI CASTILLO
% ********************************************************

% Tarea 7, Ejercicio 1
% Elabore un programa en MATLAB que resuleva la siguiente
% integral mediante el metodo de integracion de Montecarlo
% 0S3 sin(2x)/(1+x^2) dx
clc
clear
format long
M = 150; %Numero de subintervalos
N = M+1; %Numero de nodos
a = 0;
b = 3;
h = (b-a)/M;
X = a:h:b;

f = @(x) sin(2.*x)./(1+x.^2);
I = (b-a)*mean(f(X));
disp('El valor de la integral es:')
disp(I)