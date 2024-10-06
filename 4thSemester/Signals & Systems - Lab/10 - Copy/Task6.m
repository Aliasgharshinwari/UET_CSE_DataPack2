clc
clear all
close all

M = [10, 20, 50]; 

t = -pi:0.01:pi;  

% Fourier series coefficients
ak = zeros(size(t));
ak(2:2:end) = 1;  % ak = 1 when k is even
ak(1:2:end) = 2;  % ak = 2 when k is odd

% Original signal
x_original = square(t);

% Reconstruct the signal using the Fourier series coefficients
x_reconstructed = zeros(length(t), length(M));

for i = 1:length(M)
    partial_sum = 0;
    for k = 1:M(i)
        partial_sum = partial_sum + ak(k)*cos(k*t);
    end
    x_reconstructed(:,i) = partial_sum;
end

% % Plot the Fourier series coefficients
% subplot(length(M)+1, 1, 1);
% stem(t, ak(1:length(ak)), 'LineWidth', 1.5);
% title('Fourier Series Coefficients');
% xlabel('k');
% ylabel('ak');

% Plot the reconstructed signals for different values of M
for i = 1:length(M)
    subplot(length(M), 1, i);
    plot(t, x_reconstructed(:,i), 'LineWidth', 1);
    hold on;
    plot(t, x_original, 'r--', 'LineWidth', 1);
    hold off;
    title(['Reconstructed Signal (M = ' num2str(M(i)) ')']);
    xlabel('t');
    ylabel('x(t)');
    xlim([-3 3]);
    legend('Reconstructed Signal', 'Original Signal');
end
