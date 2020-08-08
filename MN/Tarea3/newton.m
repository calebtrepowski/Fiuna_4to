% ********************************************************
% ======== PROGRAMA HECHO EN GNU OCTAVE v5.2.0 ==========
% Metodos Numericos, FIUNA, 4to semestre Ing Mecatronica
% Alumno: CALEB TREPOWSKI CASTILLO
% ********************************************************

% Tarea 3, Ejercicio 1, inciso b
%Sea f(x) = x+2/x. Use el polinomio interpolador de Newton
%cubico con nodos x0 = 0,5, x1 = 1, x2 = 2 y x3 = 2,5 para
%aproximar f(1,2) y f(1,5). Realice sus calculos a partir
%de un programa en MATLAB.

format long;
N = 4;
X = [0.5 1 2 2.5];
f = @(x)x+2./x;

Y = f(X);

%Creamos la tabla de diferencias divididas
TDD = [Y' zeros(N)];

for j = 2:N %recorremos las columnas
	for i = j:N %recorremos las filas
		TDD(i,j) = ( TDD(i,j-1)-TDD(i-1,j-1) ) / ...
							 ( X(i)-X(i-(j-1)) );
	end
end

pol_int = TDD(N,N);

for k = N-1:-1:1
	pol_int = conv(pol_int,poly( X(k) ));
	pol_int(length(pol_int)) += TDD(k,k);
end

disp("Polinomio Interpolador: ")
display(pol_int)
disp("Verificacion. P(X) = :")
display(polyval(pol_int,X))
disp("f(X) = :")
display(f(X))
disp("\nValores a aproximar: ")
display(q = [1.2 1.5])
disp("\nAproximacion de f(1,2) y f(1.5): ")
display(polyval(pol_int,q))
disp("f(1.2) y f(1.5):")
display(f(q))
disp("Error: ")
display(abs(polyval(pol_int,q) - f(q)))