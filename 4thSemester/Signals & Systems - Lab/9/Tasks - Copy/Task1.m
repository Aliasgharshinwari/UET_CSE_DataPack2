clc;
clear;
close all;

% Time and signal parameters
n = 0:1:19; % Discrete time values
P = 20; % Period of the signal
f = 1/P; % Frequency of the signal

% Generate the discrete time cosine signal
xn = cos(2*pi*f*n);

% Plotting the signal
stem(n, xn);
xlabel('n');
ylabel('Amplitude');
title('Discrete Time Cosine Signal');

% Calculate the power of the signal
power_xn = sum(abs(xn).^2) / (length(n) + 1);

% Display the calculated power
fprintf('Power of the signal: %.4f\n', power_xn);
