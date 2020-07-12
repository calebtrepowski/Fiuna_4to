function [zero,valor] = secante(f,p0,p1,tol_x,tol_y,iter_max)

f = inline(f);
% 
% for i = 1:iter_max
%     p2 = p1 - ( f(p1)*(p1-p0) )/( f(p1)-f(p0) );
%     err = abs(p2-p1);
%     err_rel = err/abs(p2);
%     
%     if( (err<tol_x && abs(f(p1))<tol_y) || (err_rel<tol_x && abs(f(p1))<tol_y) )
%         break
%     end
%     p0 = p1;
%     p1 = p2;
% end
% zero = p2;
% valor = f(zero);

p = zeros(iter_max,1);
p(1) = p0;
p(2) = p1;

for k = 2:iter_max
    p(k+1) = p(k) - ( f(p(k))*(p(k)-p(k-1)) )/( f(p(k))-f(p(k-1)) );
    err = abs(p(k+1) - p(k));
    err_rel = err/abs(p(k+1));
    
     if( (err<tol_x && abs(f(p1))<tol_y) || (err_rel<tol_x && abs(f(p1))<tol_y) )
         break
     end
end
zero = p(k+1);
valor = f(zero);
end