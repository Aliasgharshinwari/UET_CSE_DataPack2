function A = specmat(n)

A = ones(n);
  
for i = 2:n
    for j = 2:n
        s = A(i-1,j) + A(i,j-1);
        if s < 20
            A(i,j) = s;
        else
            A(i,j) = max(A(i-1,j), A(i,j-1));
        end
    end
end
end
