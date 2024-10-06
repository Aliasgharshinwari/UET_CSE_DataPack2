clc; 
clear all; 
close all;

fs=1000; 
t=-3:1/fs:3; 
A=2; 
phase=pi/2; 
f=1; 
x1=A * sin(2*pi*f*t + phase);
x2=A * cos(2*pi*f*t + 0);

subplot(1,2,1)
plot(t,x1, 'linewidth', 2) 
title('Sine Wave: A sin(2\pift + \phi)') 
xlabel('Time Index') 
ylabel('Signal Amplitude') 
axis([t(1) t(end) -A A]) 
grid 

subplot(1,2,2)
plot(t,x2, 'linewidth', 2) 
title('Cos Wave: A cos(2\pift + \phi)') 
xlabel('Time Index') 
ylabel('Signal Amplitude') 
axis([t(1) t(end) -A A]) 
grid 