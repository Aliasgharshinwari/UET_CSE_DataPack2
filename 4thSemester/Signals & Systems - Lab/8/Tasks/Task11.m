clc 
clear all 
close all  

x1 = [2 -3 3 4 -2];
x2 = [4 2 3 -1 -2];
x3 = [3 5 -3 4];

y1 = conv(x1, x2); 
z1 = conv(y1, x3);

y2 = conv(x2, x3); 
z2 = conv(x1,y2);

L = conv(x1, x2); 
R = conv(x2, x1);

figure(1);
subplot(2,1,1)
stem(z1); 
title('LHS'); 
xlabel('n'); 
ylabel('z1[n]'); 

subplot(2,1,2)
stem(z2); 
title('RHS'); 
xlabel('n'); 
ylabel('z2[n]'); 

figure(2)
subplot(2,1,1)
stem(L); 
title('LHS'); 
xlabel('n'); 
ylabel('L[n]'); 

subplot(2,1,2)
stem(R); 
title('RHS'); 
xlabel('n'); 
ylabel('R[n]'); 
