P=20;
M=1;
n=0:1/M:P;
A=1;
f=1/P;
phase=0;
x = A*sin(2*pi*f*n+phase);
beta = 2;


figure(1);
stem(x);

figure(2);
stem (n, x*beta);

figure(3);
stem (n+1, x*beta);

n1=-3:1/M:3;

h=[3, 2, 1, 1, 1, 2, 3];

y=conv(x,h);

x1=[1 2 1];
y1=conv(x1,h);

stem(y);
%stem(y1);

