clear all
clc

A = [0 2;
    5 3;];

B = [3 2;
    3 6;];

A1 = ~A;
A2 = A&B;
A3 = A&~B;
A4 = A|B;
A5 = A|~A;

disp('Matrix A1 is:');
disp(A1);
disp('Matrix A2 is:');
disp(A2);
disp('Matrix A3 is:');
disp(A3);
disp('Matrix A4 is:');
disp(A4);
disp('Matrix A5 is:');
disp(A5);