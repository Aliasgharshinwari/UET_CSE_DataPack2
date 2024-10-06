A = 3;      % Amplitude
w = 2*pi*1250;  % Angular frequency
phi = -0.4;     % Phase

t = linspace(0, 0.002, 1000);   % Time vector covering 2 or 3 periods

x = A*exp(1i*(w*t+phi));    % Generate the signal

subplot(2,1,1)
plot(t, real(x))
xlabel('t')
ylabel('Real(x(t))')
title('Real part of x(t)')

subplot(2,1,2)
plot(t, imag(x))
xlabel('t')
ylabel('Imag(x(t))')
title('Imaginary part of x(t)')
