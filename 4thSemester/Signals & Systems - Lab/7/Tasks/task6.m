clc clear all close all
n=0:0.002:4;
A=2;
x=sin(2*pi*1*n);
subplot(2,1,1);
plot(n,x,'linewidth',2); 
title('Original Signal'); 
xlabel('Time'); 
ylabel('Signal Amplitude'); 
axis([-3 4 -2 2]);
grid;
subplot(2,1,2); 
plot(n,x*A,'linewidth',2); 
title('Amplified signal'); 
xlabel('Time'); 
ylabel('Signal Amplitude');
axis([-3 4 -2 2]); 
grid;