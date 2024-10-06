clc
clear
close all

t = 0:0.0001:8;
f = 1;

% Generating the fundamental component
y = sin(2*pi*f*t);

% Adding a larger number of harmonics to improve square wave approximation
for k = 3:2:100
    fh = k * f;
    harmonic = (sin(2*pi*fh*t)) / k;
    y = y + harmonic;
end

% Plotting the waveform
plot(t, y, 'linewidth', 1.5);
title('Improved Approximation of a Square Wave with 100 Harmonics');
xlabel('Time');
ylabel('Amplitude');
