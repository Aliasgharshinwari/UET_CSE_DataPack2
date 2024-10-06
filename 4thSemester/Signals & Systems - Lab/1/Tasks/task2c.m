clear
clc

a = input('Enter a \n');
b = input('Enter b \n');

tic

L = cos(a + b);
R = cos(a) * cos(b) - sin(a) * sin(b);


if L == R
    disp('LHS = RHS, Hence Proved');
else
    disp('Not Proved');
end

toc