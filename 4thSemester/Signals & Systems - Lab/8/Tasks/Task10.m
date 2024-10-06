clc 
clear all 
close all  
n=0:4;

h1 = [1 3 2 1]; 
h2 = [1 1 2];
x = [1 4 3 2];

y1 = conv(h1, x);
y = conv(y1, h2);

figure(1); 
stem(x); 
title('Discrete Filter Input x[n]'); 
xlabel('n'); 
ylabel('x[n]'); 
figure(2); 
stem(y, 'r'); 
title('Discrete Filter Output y[n]'); 
xlabel('n'); 
ylabel('y[n]'); 