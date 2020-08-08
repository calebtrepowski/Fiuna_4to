f = inline('x*sin(x) - 1');

a = 0;
b = 2;
epsilon = 1e-5;
n = round( (log(b-a) - log(epsilon))/log(2) );

if f(a)*f(b)>0
	error('La funcion no cumple el teorema de Bolzano en el intervalo dado')
end

c = [ ];

for i = 1:1:n
	c(i) = (a+b)/2;
	if f(a)*f(c)<0
		b = c(i);
		c(i+1) = (a+b)/2;
		
	elseif f(c)*f(b)<0
		a = c(i);
		c(i+1) = (a+b)/2;
	
	end
end