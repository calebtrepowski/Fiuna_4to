% ================ Programa hecho en GNU Octave 5.2.0 ====================
% *********** 3er Examen Parcial Metodos Numericos - FIUNA ***************
% ************ Alumno: Caleb Trepowski Castillo - CI: 4635928 ************
% ******************************** Tema 1 ********************************

a = 0;
b = 12;

N = 2; %cantidad de subintervalos
h = (b-a)/N;

t = a:h:b;

% dF = [x'1 ; x'2 ; x'3]
dF = @(t,X) [sin(X(2))*X(3)*t ; X(1)*cos(X(3))*t ; 3*X(1)*X(2)*t ];
% X = [ x1(t) ; x2(t) ; x3(t) ]
X = zeros(3,N+1);
X(:,1) = [2 0 1]';

for k = 1:N
	f1 = dF(t(k), X(:,k));
	f2 = dF(t(k) + (h/2), X(:,k) + (h/2)*f1);
	f3 = dF(t(k) + (h/2), X(:,k) + (h/2)*f2);
	f4 = dF(t(k) + h, X(:,k) + h*f3);
	
	X(:,k+1) = X(:,k) + (h/6)*(f1 + 2*f2 + 2*f3 + f4);
end

disp('Los valores sucesivos de la solucion son:')
disp(X)
hold off
plot(t,X(1,:),'r')
hold on
plot(t,X(2,:),'b')
plot(t,X(3,:),'y')
legend('x1','x2','x3')