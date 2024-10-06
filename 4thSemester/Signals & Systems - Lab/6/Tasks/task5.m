clc; 
clear all; 
close all; 
fs=1000; 
t=-1:1/fs:1;
A=5;

x1=A * sin(2*pi*3*t + pi/2);
x2=A * cos(2*pi*3*t);

subplot(1,2,1)
plot(t,x1, 'linewidth', 2) 
title('Sine Wave: A sin(2*\pi*3*t + \pi/2)') 
xlabel('Time Index') 
ylabel('Signal Amplitude') 
axis([t(1) t(end) -A A]) 
grid 

subplot(1,2,2)
plot(t,x2, 'linewidth', 2) 
title('Cos Wave: A cos(2*\pi*3*t + 0)') 
xlabel('Time Index') 
ylabel('Signal Amplitude') 
axis([t(1) t(end) -A A]) 
grid 