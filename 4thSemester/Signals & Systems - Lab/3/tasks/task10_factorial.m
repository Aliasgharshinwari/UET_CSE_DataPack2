n = input('Enter the number to find its factorial\n');
fact = 1;

for i = 1:n
    fact = fact * i;
end

disp('Factorial of entered number is:');
disp(fact);