clear, close all, clc
n=0:1/10:10;
k=5;
a=pi/2;
x=k * exp(a*n*i);
x_conj = conj(x);

% plot the real part
subplot(2,1,1)
stem(n, real(x_conj), 'filled')
title('Real part of complex exp')
xlabel('sample #')
ylabel('signal amplitude')
grid
% plot the imaginary part
subplot(2,1,2)
stem(n, imag(x_conj), 'filled')
title('Imaginary part of complex exp')
xlabel('sample #')
ylabel('signal amplitude')
grid