A = [4 -1 1;4 -8 1;2 1 5]
n = length(A);
I = eye(n);
G = [A I]

for i = 1:n %filas pivot
  for j = i+1:n %filas a cambiar
     mult = G(j,i)/G(i,i);
     G(j,:) = G(j,:) - mult*G(i,:);
   end
end

G(:,1:n)

for i = n:-1:1
  for j = i-1:-1:1
    mult = G(j,i)/G(i,i);
    G(j,:) = G(j,:) - mult*G(i,:);
  end
end

G(:,1:n)