% ********************************************************
% ======== PROGRAMA HECHO EN GNU OCTAVE v5.2.0 ==========
% Metodos Numericos, FIUNA, 4to semestre Ing Mecatronica
% Alumno: CALEB TREPOWSKI CASTILLO
% ********************************************************
% Tarea 9, Ejercicio 2
% Resuelva el siguiente problema de contorno con paso h = 0.01 utilizando
% MATLAB. Dibuje su solucion numerica y la analitica en el mismo grafico.
% x'' = 2x' - x + t^2 -1 en [0,1] con x(0) = 5 y x(1) = 10
% Solucion analitica: x(t) = t^2 + 4t + 5
solAnalitica = @(t) t.^2 + 4*t + 5;
p = @(t) 2;
q = @(t) -1;
r = @(t) t.^2 - 1;

a = 0;
b = 1;
h = 0.01;
M = (b-a)/h; %subintervalos
N = M+1;
t = a:h:b;

alfa = 5;
beta = 10;

diagPrincipal = zeros(1,N-2);
diagSuperior = zeros(1,N-3);
diagInferior = zeros(1,N-3);
B = zeros(1,N-2);

for k = 2:N-1
	#diagonal principal
	diagPrincipal(k-1) = 2 + (h^2)*q(t(k));
	#diagonal superior
	if k ~= N-1
		diagSuperior(k-1) = (h/2)*p(t(k)) - 1;
	end
	#diagonal inferior
	if k ~= 2
		diagInferior(k-2) = -(h/2)*p(t(k)) - 1;
	end
	
	B(k-1) = -(h^2)*r(t(k));
end

A = diag(diagPrincipal) + diag(diagSuperior,1) + diag(diagInferior,-1);

e0 = ( (h/2)*p(t(2))+1 )*alfa;
eN = ( (-h/2)*p(t(N-2))+1 )*beta;

B(1) += e0;
B(N-2) += eN;

X = inv(A)*B';
X = [alfa X' beta];
hold off
plot(t,solAnalitica(t),'r')
hold on
plot(t,X,'b')
legend(["sol Analitica";"sol Aproximada"])
