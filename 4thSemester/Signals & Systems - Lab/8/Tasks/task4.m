clc 
clear all 
close all  

x = [2 4 6 4 2];
h = [3 -1 2 1];

y = conv(h, x); 

figure(1); 
stem(x); 
title('Discrete Filter Input x[n]'); 
xlabel('index, n'); 
ylabel('Value, x[n]'); 

figure(2); 
stem(y, 'r'); 
title('Discrete Filter Output y[n]'); 
xlabel('index, n'); 
ylabel('Value, y[n]'); 