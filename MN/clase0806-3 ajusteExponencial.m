clear all
clc

%Datos
X = [0,1,2,3,4];
Y = [1.5,2.5,3.5,5.0,7.5];
n = length(X);

%Cambios de variables
 x = X;
 y = log(Y);
 
 %Grafico de Dispersion
figure(1)
plot(X,Y,'ro')
hold on %evita que se borre el grafico anterior

%Calculo del sistema matricial
A = zeros(2,2);
A(1,1) = sum(x.^2);
A(1,2) = sum(x);
A(2,1) = sum(x);
A(2,2) = n;

B = [ sum(x.*y) ; sum(y) ];

%Calculo de los coeficientes A y C
sol = A\B;
display('y=C*e^(Ax)')
A = sol(1)
b = sol(2);
C = exp(b)

f = @(x)(C*exp(A*x));

%Discretizacion y grafico de la recta
xx = X(1):0.01:X(n);
yy = f(xx);
plot(xx,yy)

%Calculo del coeficiente de determinacion
y_media = mean(Y);
SSres = sum( ( f(X) - Y ).^2 );
SStot = sum( (y_media - Y).^2 );
R2 = 1 - SSres/SStot 