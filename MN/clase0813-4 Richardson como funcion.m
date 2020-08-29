function res = rich (f,x,h,k)
	if k>0
			res = ((4^k)*rich(f,x,h,k-1)-rich(f,x,2*h,k-1))/((4^k)-1);
	elseif k == 0
			res = (f(x+h)-f(x-h))/(2*h);
	end
end