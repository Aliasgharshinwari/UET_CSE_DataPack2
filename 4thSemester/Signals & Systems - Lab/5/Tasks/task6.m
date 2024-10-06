clear, close all, clc
n=-10:1/10:10;

x = exp((-0.2+0.5i)*n);

% plot the real part
subplot(2,2,1)
stem(n, real(x), 'filled')
title('Real part of complex exp')
xlabel('sample #')
ylabel('signal amplitude')
grid

% plot the imaginary part
subplot(2,2,2)
stem(n, imag(x), 'filled')
title('Imaginary part of complex exp')
xlabel('sample #')
ylabel('signal amplitude')
grid

% plot the imaginary part
subplot(2,2,3)
stem(n, abs(x), 'filled')
title('Absolute of complex exp')
xlabel('sample #')
ylabel('signal amplitude')
grid

% plot the imaginary part
subplot(2,2,4)
stem(n, angle(x), 'filled')
title('Phase of complex exp')
xlabel('sample #')
ylabel('signal amplitude')
grid