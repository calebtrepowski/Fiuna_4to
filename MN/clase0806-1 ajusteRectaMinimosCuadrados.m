clear all
clc

%Datos
x = [-1,0,1,2,3,4,5,6];
y = [10,9,7,5,4,3,0,-1];
n = length(x);

%Grafico de Dispersion
figure(1)
plot(x,y,'ro') %la o hace lo mismo que scatter
hold on %evita que se borre el grafico anterior

%Calculo del sistema matricial
A = zeros(2,2);
A(1,1) = sum(x.^2);
A(1,2) = sum(x);
A(2,1) = sum(x);
A(2,2) = n;

B = [ sum(x.*y) ; sum(y) ];

%Calculo de los coeficientes a y b
sol = A\B;
display('y=ax+b')
a = sol(1)
b = sol(2)

f = @(x)(a*x+b); % inline('a*x+b','x') (no funciona)

%Discretizacion y grafico de la recta
xx = x(1):0.01:x(n);
yy = f(xx);
plot(xx,yy)

%Calculo del coeficiente de determinacion
y_media = mean(y);
SSres = sum( ( f(x) - y ).^2 );
SStot = sum( (y_media - y).^2 );
R2 = 1 - SSres/SStot 