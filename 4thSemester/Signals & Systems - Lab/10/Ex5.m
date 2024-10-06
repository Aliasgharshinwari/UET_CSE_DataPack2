clc
clear all
close all
t = -1.5:0.005:1.5;  
T = 1;
T1 = 1/4;
w0 = 2*pi/T;  
M = 20;
k = -M:M;
ak = sin(k*2*pi*(T1/T))./(k*pi);
% Manual correction for a0 ?> ak(M+1)  
ak(M+1) = 2*T1/T;
x = zeros(1,length(t));  
for k = -M:M
   x = x + ak(k+M+1)*exp(j*k*w0*t);  
end
figure;
set(gcf,'defaultaxesfontsize',9);  
plot(t,real(x),'lineWidth',2);
grid;
xlabel('t');
ylabel('x(t)');  
title('Reconstruction from Fourier Series with 41 terms');