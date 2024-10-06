clc 
clear all 
close all 

n= -2:7; 
x1 = 1*[n==-1]+ 2*[n==0] + 2*[n==1]  + 1*[n==2]  
+ 1*[n==4]; 

subplot(2,1,1); 
stem(n,x1,'LineWidth',2); 
xlabel('time'); 
ylabel('signal amplitude'); 
title('sin(2*\pi*f*t)'); 
%u = (n<0); 
%x2 = x1.*u; 
x2 = sig_causal(x1,2);

%subplot(3,1,2); 
%stem(n,u, 'r','LineWidth',2); 
%xlabel('time'); 
%ylabel('Signal Amplitude'); 
%title('Unit Step'); 

subplot(2,1,2); 
stem(n,x2, 'k','LineWidth',2); 
xlabel('time'); 
ylabel('signal amplitude'); 
title('Causal version of sin(2*\pi*f*t)'); 