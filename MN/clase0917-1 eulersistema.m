%Clase virtual 17 de septiembre, Gustavo Recalde

clear
clc

f = @(t,x,y) ( x+2*y );
g = @(t,x,y)( 3*x+2*y );

t0 = 0;
tf = 2;
%realmente se puede sacar toda la curva, tf aca es para
%propositos didacticos
x(1) = 6;
y(1) = 4;

h = 0.1;
t = t0:h:tf;

%% Metodo de Euler
for k = 1:length(t)-1
	x(k+1) = x(k) + h*f(t(k),x(k),y(k));
	y(k+1) = y(k) + h*g(t(k),x(k),y(k));
end

%% Solucion real
tt = t0:1e-3:tf;
Xreal = (4*exp(4*tt) + 2*exp(-tt));
Yreal = (6*exp(4*tt) - 2*exp(-tt));

figure(1)
subplot(1,2,1); %1 fila, 2 columnas, posicion 1
plot(t,x,'r', tt,Xreal,'b')
title('x(t)')
subplot(1,2,2); %1 fila, 2 columnas, posicion 2
plot(t,y,'k', tt,Yreal,'g')
title('y(t)')