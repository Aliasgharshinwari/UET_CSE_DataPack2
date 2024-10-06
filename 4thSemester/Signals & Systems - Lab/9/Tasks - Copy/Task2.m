clc
clear
close all

t = 0:0.0001:8;
f = 1;

% Generating the fundamental component
y = sin(2*pi*f*t);

% Adding odd harmonics to approximate the square wave
for k = 3:2:9
    fh = k * f;
    harmonic = (sin(2*pi*fh*t)) / k;
    y = y + harmonic;
end

% Plotting the waveform
plot(t, y, 'linewidth', 1.5);
title('Approximation of a Square Wave with Harmonics');
xlabel('Time');
ylabel('Amplitude');
