clc 
clear all 
close all  

x1 = [3 1 1];
x2 = [4 2 1];
x3 = [3 2 1 2 3];

y1 = conv(x1, x2); 
z1 = conv(y1, x3);

y2 = conv(x2, x3); 
z2 = conv(x1,y2);

figure(1); 
stem(z1); 
title('LHS'); 
xlabel('index, n'); 
ylabel('Value, x[n]'); 

figure(2); 
stem(z2, 'r'); 
title('RHS'); 
xlabel('index, n'); 
ylabel('Value, y1[n]'); 