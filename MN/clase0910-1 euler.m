function res = euler(f,t0,y0,tf,M)
	t(1) = t0;
	y(1) = y0;
	
	h = (tf-t0)/M;
	
	for k = 1:M
		y(k+1) = y(k) + f(t(k),y(k))*h;
		t(k+1) = t(k) + h;
	end
	resp = [t',y'];
	%Solucion analitica
	x = t0:1e-3:tf;
	F = @(x) (exp(x.^2/2));
	%Graficos
	plot(t,y,'r',x,F(x),'b')

end