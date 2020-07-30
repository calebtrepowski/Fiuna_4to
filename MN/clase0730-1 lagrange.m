function polinomio = lagrange(x,y)
	n = length(x);
	polinomio = zeros(1,n);
	
	%a = poly([1 1])
	%retorna un polinomio con los coeficientes dados en el parametro
	
	%polyval(a,1)
	%retorna el resultado de evaluar 1 en el polinomio a
	
	for k = 1:n
		L = poly(x( [1:k-1 k+1:n] ));
		%tomamos todos los terminos excepto el numero i
		L = L/polyval( L,x(k) );
		polinomio = polinomio + y(k)*L;
	end
	
end