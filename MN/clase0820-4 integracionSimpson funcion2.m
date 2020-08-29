function A = simpson2(f,a,b,M)
	%f: funcion a integrar
	%a,b: limites del intervalo
	%M: numero de subintervalos, debe ser par
	f = inline(f);
	h = (b-a)/M;
	x = a:h:b;
	fx = f(x); %vector fila
	w = ones(length(x),1); %vector columna
	w(2:2:end-1) = 4;
	w(3:2:end-2) = 2;
	A = (h/3)* (fx*w);
end
