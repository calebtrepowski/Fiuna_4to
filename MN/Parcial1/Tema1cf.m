%%% Primer Examen Parcial MN %%%

X = [-1, 0, 1, 2, 3, 4, 5, 6 ,7 ,11, 14, 17, 21, 23, 25, 26];
Y = [-1, 1, 9, 1, 3, -1, 2, 3, 7, 1, 2, 3, 1, -1, 12, 11];

N = 3;
if mod(length(X),2) == 0
	error('No se cumple la condicion para interpolacion a trozos.')
end	
%en total se hacen 7 interpolaciones, al tomar de 3 en 3 y empezando
%por el ultimo del grupo anterior. En este caso no da exacto
%ej: a0 a1 a2 a3 a4 a5: [a0 a1 a2],[a2 a3 a4],[a4 a5 faltante]

polinomios = [];

for sg = 1:2:14
	x = X(sg:sg+(N-1));
	y = Y(sg:sg+(N-1));
	
	TDD = zeros(N,N);
	TDD(:,1) = y';
	
	for j = 2:N
		for i = j:N
			TDD(i,j) = (TDD(i,j-1) - TDD(i-1,j-1)) / ( x(i) - x(i-(j-1)) );
		end
	end
	pol = [TDD(N,N),0];
	
	for j = N-1:-1:1
		pol = conv(pol,[1,-x(j)]);
		pol += TDD(j,j);
		
	end
	polinomios(length(polinomios)+1)= pol';
	display(pol)
	display(polyval(pol,x))
	display(y)
end

scatter(X,Y)

