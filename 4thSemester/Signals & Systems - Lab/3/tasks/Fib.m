function A = Fib(N)
A = zeros(1,N); 

for i = 1:N
    if i <= 2
        A(i) = 1; 
    else
        A(i) = A(i-1) + A(i-2);
    end
end
end
