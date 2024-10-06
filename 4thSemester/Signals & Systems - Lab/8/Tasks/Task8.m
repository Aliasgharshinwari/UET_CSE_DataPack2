n = -10:10;  % Range of n
x = 2*(n==0);  % x[n] = 2?[n]
h = cumsum(x);  % Calculate impulse response
y = conv(x, h, 'same');  % Calculate output signal

figure;
subplot(3,1,1);
stem(n, x);
title('Input Signal');
xlabel('n');
ylabel('x[n]');

subplot(3,1,2);
stem(n, h);
title('Impulse Response');
xlabel('n');
ylabel('h[n]');

subplot(3,1,3);
stem(n, y);
title('Output Signal');
xlabel('n');
ylabel('y[n]');
