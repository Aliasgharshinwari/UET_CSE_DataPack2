clear
clc

a = input('Enter a \n');
b = input('Enter b \n');

tic

L = sin(a + b);
R = (sin(a) * cos(b)) + (sin(b) * cos(a));

if L == R
    disp('LHS = RHS, Hence Proved');
else
    disp('Not Proved');
end
toc