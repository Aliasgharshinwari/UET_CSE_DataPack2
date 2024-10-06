clc 
clear all 
close all  
n=0:4;

h = [2 1 2 4 3]; 
x = [1 4 3 2];

y = conv(h, x); 

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