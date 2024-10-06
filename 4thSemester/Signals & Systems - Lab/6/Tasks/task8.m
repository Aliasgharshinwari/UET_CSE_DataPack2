clc; 
clear all; 
close all; 

n=input('Enter number of sinuosoids:');
x1=0;
t=-1:0.01:1;
frequencies = zeros(1, n);

for i = 1:n
    prompt = sprintf('Enter the frequency for sinusoid %d: ', i);
    frequencies(i) = input(prompt);
end

for j=1:n
    A=1;
    f = frequencies(j);
    phase=0;
    x=A*sin(2*pi*f*t+phase);
    subplot(n+1,1,j)
    plot(t,x,'linewidth',2)
    title_str = ['Input Sinosoid ', num2str(j)];
    title(title_str)
    x1=x1+x;
    grid;
end
subplot(n+1,1,j+1)
plot(t,x1,'linewidth',2)
title('Resultant Sinusoid')
grid