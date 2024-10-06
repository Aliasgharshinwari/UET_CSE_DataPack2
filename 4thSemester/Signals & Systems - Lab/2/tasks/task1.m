clear all
clc

A = [3 6 9;
    1 4 8;
    2 8 7;];

B=zeros(3);3
c2=A(1:3,2)-A(1:3,1);
c3=A(1:3,3)-A(1:3,2);
B(1:3,1)=A(1:3,1);
B(1:3,2)=c2;
B(1:3,3)=c3;
disp('A matrix is');
disp(A);
disp('B matrix is');
disp(B);