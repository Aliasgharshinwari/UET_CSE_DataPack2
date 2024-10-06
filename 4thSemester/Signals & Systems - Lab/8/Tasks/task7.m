clc 
clear all 
close all  

x = [1 3 2 1];
h = [1 1 2];

y1 = conv(h, x); 
y2 = conv(x, h);

figure(1); 
stem(y1, 'r'); 
title('Discrete Filter Output y1[n]'); 
xlabel('n'); 
ylabel('y1[n]'); 

figure(2); 
stem(y2, 'r'); 
title('Discrete Filter Output y2[n]'); 
xlabel('n'); 
ylabel('y2[n]'); 