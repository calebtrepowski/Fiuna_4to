function A = trapecio2(f,a,b,M)
	%f: funcion a integrar
	%a,b: limites del intervalo
	%M: numero de subintervalos
	f = inline(f);
	h = (b-a)/M;
	x = a:h:b; %vector fila 

	% w = [1 2 2 ... 2 2 1]
	% fx = [ f0 f1 f2 ... fm-2 fm-1 fm]
	fx = f(x); %vector fila
	w = ones(length(x),1); %vector columna
	w(2:end-1) = 2;

	A = (h/2)*fx*w;
end