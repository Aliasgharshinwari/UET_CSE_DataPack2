clear, close all, clc
n=0:1/10:10;
t=0:1/100:10;
a=1.3;
x_n = a.^(n);
x_t = a.^(t);

% plot the imaginary part
subplot(1,2,1)
stem(n, x_n, 'filled')
title('Discrete Time Version')
xlabel('n')
ylabel('signal amplitude')
grid

% plot the imaginary part
subplot(1,2,2)
plot(t,x_t)
title('Continuous Time Version')
xlabel('t')
ylabel('signal amplitude')
grid