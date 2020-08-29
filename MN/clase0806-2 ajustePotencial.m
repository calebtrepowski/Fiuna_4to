clear all
clc

%Datos
x = [0.2,0.4,0.6,0.8,1.0];
y = [0.1960,0.7850,1.7665,3.1405,4.9075];
M = 2;
n = length(x);

%Grafico de Dispersion
figure(1)
plot(x,y,'ro')
hold on %evita que se borre el grafico anterior

%Calculo del coeficiente A
display('y=A*x^M')
A = sum( x.^M.*y ) / sum( x.^(2*M) )
M

f = @(x)(A*x.^M);

%Discretizacion y grafico de la recta
xx = x(1):0.01:x(n);
yy = f(xx);
plot(xx,yy)

%Calculo del coeficiente de determinacion
y_media = mean(y);
SSres = sum( ( f(x) - y ).^2 );
SStot = sum( (y_media - y).^2 );
R2 = 1 - SSres/SStot 