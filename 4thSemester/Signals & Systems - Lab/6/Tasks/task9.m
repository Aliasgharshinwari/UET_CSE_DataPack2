clc; 
clear all; 
close all; 

n=input('Enter number of sinuosoids:');
x1=0;
t=-2:0.01:2;
phases = zeros(1, n);

for i = 1:n
    prompt = sprintf('Enter the phase for sinusoid %d: ', i);
    phases(i) = input(prompt);
end

for j=1:n
    A=1;
    phase = phases(j);
    f=0.5;
    x=A*sin(2*pi*f*t+phase);
    subplot(n+1,1,j)
    plot(t,x,'linewidth',2)
    title_str = ['Input Sinosoid ', num2str(j)];
    title(title_str)
    x1=x1+x;
    grid;
end
subplot(n+1,1,j+1);
plot(t,x1,'linewidth',2);
axis([t(1) t(end) (min(x1)) max(x1)]) 
grid;
title('Resultant Sinusoid');