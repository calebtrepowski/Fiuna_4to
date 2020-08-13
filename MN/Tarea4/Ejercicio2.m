% ********************************************************
% ======== PROGRAMA HECHO EN GNU OCTAVE v5.2.0 ==========
% Metodos Numericos, FIUNA, 4to semestre Ing Mecatronica
% Alumno: CALEB TREPOWSKI CASTILLO
% ********************************************************

% Tarea 4, Ejercicio 2
%Mediante un programa en MATLAB, ajuste los datos siguientes
%con una parabola en minimos cuadrados. Haga una grafica de
%los datos y de la curva.
format long
x = [0.75 2 3 4 6 8 8.5];
y = [1.2 1.95 2 2.4 2.5 2.7 2.6];

N = length(x);

sum_y = sum(y);
sum_x = sum(x);
sum_x2 = sum(x.^2);
sum_x3 = sum(x.^3);
sum_x4 = sum(x.^4);

sum_xy = sum(dot(x,y));
sum_x2y = sum(dot(x.^2,y));

eq1 = [sum_x4 sum_x3 sum_x2];
eq2 = [sum_x3 sum_x2 sum_x];
eq3 = [sum_x2 sum_x N];

coef = [eq1;eq2;eq3];
indep = [sum_x2y sum_xy sum_y]';

parabola = inv(coef)*indep;

scatter(x,y);
hold on
X = 0.5:0.25:8.5;
plot(X,polyval(parabola,X));
hold off