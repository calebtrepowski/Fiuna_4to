function [zero,valor] = newton(f,df,p0,tol_x,tol_y,iter_max)
f = inline(f);
df = inline(df);

for i = 1:iter_max
    p1 = p0 - f(p0)/df(p0);
    err = abs(p1-p0);
    err_rel = err/abs(p1);
    if( (err<tol_x && abs(f(p1))<tol_y) || (err_rel<tol_x && abs(f(p1))<tol_y) )
        break
    end
    p0 = p1;
end
zero = p1;
valor = f(zero);
end