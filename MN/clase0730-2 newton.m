function [polinomio, TD] = newton(x,y)
	%TD: Tabla de diferencias divididas
	n = length(x);
	TD = zeros(n);
	
	TD(:,1) = y;
	%%Creacion de la tabla de diferencias divididas
	for col = 2:n
		for fil = col:n
			TD(fil,col) = ( TD(fil,col-1) - TD(fil-1,col-1) )...
				/ ( x(fil) - x( fil-(col-1) ) );
			
  	end
	end
	polinomio = TD(n,n);
	%% a0 + (x-x0 [ a1 + a2(x-x1) ])
	for k = n-1:-1:1
		polinomio = conv(polinomio,poly( x(k )));
		%conv devuelve el producto entre los polinomios
		polinomio(length(polinomio)) += TD(k,k);
	end
end