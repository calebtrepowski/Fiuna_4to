function X = jacobi(A,b,p0,iter_max,epsilon)
	p = [p0];
	for i = 2:1:iter_max
	  for j = 1:1:length(A)
		p(j,i) = ( b(j) - dot( A(j,:) , p(:,i-1) ) + A(j,j)*p(j,i-1) ) / A(j,j);
	  end
	  if norm( p(:,i) - p(:,i-1) , 2 ) < epsilon
		break
	  end
	end
	X = p(:,i);
end
