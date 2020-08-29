function A = trapecio(f,a,b,M)
	%f: funcion a integrar
	%a,b: limites del intervalo
	%M: numero de subintervalos
	f = inline(f);
	h = (b-a)/M;
	x = a:h:b;

	A = 0;

	for k=1:M
			A = A + ( f(x(k)) + f(x(k+1)) )* ( h/2 );
	end
end