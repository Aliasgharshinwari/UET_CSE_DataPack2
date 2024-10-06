clc; 
clear all; 
close all; 

t=-2:0.01:2;
x1=sin(2*pi*t+0);
x2=sin(2*pi*t+pi);

x=x1+x2;

subplot(3,1,1)
plot(t,x1,'linewidth',2)

subplot(3,1,2)
plot(t,x2,'linewidth',2)

subplot(3,1,3)
plot(t,x,'linewidth',2)
axis([t(1) t(end) -1 1]) 
grid;