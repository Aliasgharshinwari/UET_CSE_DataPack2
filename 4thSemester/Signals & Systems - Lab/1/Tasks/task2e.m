clear
clc
a = input('Enter a \n');
b = input('Enter b \n');
tic
L = sin(a) + sin(b);
R = 2 * (sin((a + b)/2)) * (cos((a - b)/2)) ;
if L == R
    disp('LHS = RHS, Hence Proved');
else
    disp('Not Proved');
end
toc