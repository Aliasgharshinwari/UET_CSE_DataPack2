% Define the signal
t = 0:0.01:2*pi; % create a vector of time values from 0 to 2?
x = exp(-t).*sin(8*t); % create the signal

% Define the sampling frequency and sampling interval
fs = 10; % sampling frequency
Ts = 1/fs; % sampling interval

% Create a vector of discrete-time values
n = 0:fs*2*pi-1;

% Sample the continuous-time signal at the discrete-time values
x_sampled = exp(-n*Ts).*sin(8*n*Ts);

% Plot the continuous-time signal and its discrete-time representation
figure;
subplot(2,1,1);
plot(t,x,'linewidth',2);
xlabel('t');
ylabel('x(t)');
title('Continuous-time representation of the signal exp(-t)sin(8t)');
grid;

subplot(2,1,2);
stem(n,x_sampled,'linewidth',2);
xlabel('n');
ylabel('x(nTs)');
title('Discrete-time representation of the signal exp(-nTs)sin(8nTs)');
grid;