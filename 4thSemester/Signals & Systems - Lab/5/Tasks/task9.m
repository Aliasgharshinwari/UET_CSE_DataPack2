clear, close all, clc
n=-10:1/10:10;

a1 = 0.5;
a2 = 2;

x1 = a1.^(abs(n));
x2 = a2.^(abs(n));

% plot the imaginary part
subplot(1,2,1)
stem(n, x1, 'filled')
title('For a = 0.5')
xlabel('n')
ylabel('signal amplitude')
grid

% plot the imaginary part
subplot(1,2,2)
stem(n,x2,'filled')
title('For a = 2')
xlabel('n')
ylabel('signal amplitude')
grid