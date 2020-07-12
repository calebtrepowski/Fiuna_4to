A = [4 -1 1; 4 -8 1;-2 1 5];
b = [7 -21 15]';
p0 = [1 2 2]';
iter_max = 50;
epsilon = 1e-5;

p = [p0];

for i = 2:1:iter_max
	aux = p(:,i-1)
  p(1,i) = ( b(1) - dot( A(1,:) , p(:,i-1) ) + A(1,1)*p(1,i-1)  )/(A(1,1))
  for j = 2:1:length(A)
    p(j,i) = ( b(j) - dot( A(j,:) , p(:,i-1) ) + A(j,j)*p(j,i-1) ) / A(j,j);
  end
  if norm( p(:,i) - p(:,i-1) , 2 ) < epsilon
    break
  end
end
X = p(:,i)
i