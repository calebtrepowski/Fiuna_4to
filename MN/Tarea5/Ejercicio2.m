% ********************************************************
% ======== PROGRAMA HECHO EN GNU OCTAVE v5.2.0 ==========
% Metodos Numericos, FIUNA, 4to semestre Ing Mecatronica
% Alumno: CALEB TREPOWSKI CASTILLO
% ********************************************************

% Tarea 5, Ejercicio 2
% El voltaje E(t) en un circuito electrico obedece la ecuacion
% E(t) = L(dI(t)/dt) + RI(t), donde R es la resistencia, L es
% la inductancia e I es la intensidad de corriente.
% Consideremos L = 0,05 henrios, R = 2 ohmios y los valores de
% la intensidad I(t), en amperios, que se relacionan en la
% siguiente tabla:

L = 0.05;
R = 2;
t = [1.0 1.1 1.2 1.3 1.4];
I = [8.2277 7.2428 5.9908 4.5260 2.9122];

% Mediante un programa en MATLAB, determine I'(1.0) I'(1.1)
% I'(1.2) I'(1.3) I'(1.4) mediante derivacion numerica de orden
% O(h^2) y use estos valores para calcular E(1,0), E(1,1), E(1,2),
% E(1,3) y E(1,4)
% En el mismo codigo realizado anteriormente, compare su respuesta
% con la que se obtiene sabiendo que la expresion de I(t) es
% I(t) = 10e^(-t/10)*sen(2t).

dI = [];
h = 0.1;

for i = 1:length(t)
	if i == 1
		dI(i) = ( -3*I(i)+4*I(i+1)-I(i+2) )/( 2*h );
	elseif i == length(t)
		dI(i) = ( +3*I(i)-4*I(i-1)+I(i-2) )/( 2*h );
	else
		dI(i) = ( I(i+1) - I(i-1) )/( 2*h );
	end
end
display('Valores aproximados de E(t) para los valores del vector t dado')
E = L.*dI + R.*I;
disp(E);

III = @(t) 10*exp(-t./10).*sin(2.*t);
%Hallamos la derivada de esta funcion
II = @(t) -exp(-t./10).*(sin(2.*t)-20.*cos(2.*t));
display('Valores reales de E(t) para los valores del vector t dado');
EE = L.*II(t) + R.*III(t);
disp(EE);
display('Error absoluto en cada punto');
display(abs(EE-E));