clc; 
clear all; 
close all; 

n=input('Enter number of sinuosoids:');
x1=0;
t=-1:0.01:1;
for i=1:n
    f=3;
    A=1;
    phase=0;
    x=A*sin(2*pi*f*t+phase);
    subplot(n+1,1,i)
    plot(t,x,'linewidth',2)
    title_str = sprintf('Input Sinosoid %d', i);
    title(title_str)
    xlabel('Time Index') 
    ylabel('Signal Amplitude')
    x1=x1+x;
    grid;
end
subplot(n+1,1,i+1)
plot(t,x1,'linewidth',2)
title('Resultant Sinusoid')
xlabel('Time Index') 
ylabel('Signal Amplitude')