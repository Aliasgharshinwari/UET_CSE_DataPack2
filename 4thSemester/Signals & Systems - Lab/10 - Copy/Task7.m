clc
clear all
close all
 
M = 10;
t = -pi:0.01:pi;  

% Fourier series coefficients
ak = zeros(size(t));
ak(abs(t) < 3) = 1j.*t(abs(t) < 3);

% Original signal
x_original = square(t);

% Reconstruct the signal using the Fourier series coefficients
x_reconstructed = zeros(length(t), 1);
partial_sum = 0;
for k = 1:M
    partial_sum = partial_sum + ak(k)*cos(k*t);
    x_reconstructed = partial_sum;
end

% Plot the Fourier series coefficients
subplot(2, 1, 1);
plot(t, real(ak), 'LineWidth', 1.5);
title('Fourier Series Coefficients');
xlabel('k');
ylabel('ak');
xlim([-pi pi]);

% Plot the reconstructed signal
subplot(2, 1, 2);
plot(t, x_reconstructed, 'LineWidth', 1);
hold on;
plot(t, x_original, 'r--', 'LineWidth', 1);
hold off;
title(['Reconstructed Signal (M = ' num2str(M) ')']);
xlabel('t');
ylabel('x(t)');
xlim([-3 3]);
legend('Reconstructed Signal', 'Original Signal');
