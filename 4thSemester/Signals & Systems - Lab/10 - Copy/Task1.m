clc
clear all
close all

t = -3:0.01:3; % duration of signal

% dc component for k=0
x0 = 1;

% updated harmonic components for k=-1 and k=1
x_minus_1 = (1/4)*exp(j*(-1)*2*pi*t);
x_1 = (1/3)*exp(j*(1)*2*pi*t);

y_1 = x0 + x_minus_1 + x_1; % sum of dc component and updated harmonic components

% second harmonic components for k=-2 and k=2
x_minus_2 = (1/2)*exp(j*(-2)*2*pi*t);
x_2 = (1/2)*exp(j*(2)*2*pi*t);

y_2 = y_1 + x_minus_2 + x_2; % sum of all components until second harmonic

% third harmonic components for k=-3 and k=3
x_minus_3 = (1/3)*exp(j*(-3)*2*pi*t);
x_3 = (1/4)*exp(j*(3)*2*pi*t);

x = x0 + x_minus_1 + x_1 + x_minus_2 + x_2 + x_minus_3 + x_3; % sum of all components until third harmonic

figure;
subplot(3,2,1);
plot(t,x_minus_1);
axis([-3 3 -2 2]);
title('x_{-1}(t)');

subplot(3,2,2);
plot(t,y_1);
axis([-3 3 -0.2 2]);
title('x_0(t) + x_{-1}(t) + x_1(t)');

subplot(3,2,3);
plot(t,x_minus_2);
axis([-3 3 -2 2]);
title('x_{-2}(t)');

subplot(3,2,4);
plot(t,y_2);
axis([-3 3 -1 3]);
title('x_0(t) + x_{-1}(t) + x_1(t) + x_{-2}(t) + x_2(t)');

subplot(3,2,5);
plot(t,x_minus_3);
xlabel('t');
axis([-3 3 -1 1]);
title('x_{-3}(t)');

subplot(3,2,6);
plot(t,x);
xlabel('t');
axis([-3 3 -1 4]);
title('x(t) = x_0(t) + x_{-1}(t) + x_1(t) + x_{-2}(t) + x_2(t) + x_{-3}(t) + x_3(t)');
