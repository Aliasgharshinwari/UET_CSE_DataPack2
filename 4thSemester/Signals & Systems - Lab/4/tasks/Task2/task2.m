clc
clear

beta = input('Enter value of beta factor\n');
signal = input('Enter signal\n');

A = ampl_scaling(beta,signal);

disp(['The scaled output is :', num2str(A)]);


subplot(2, 1, 1);
stem(signal,'filled','LineWidth',2);
title('Original signal');
xlim([1 length(A)]);
ylim([1 max(A)]);
grid on

subplot(2, 1, 2);
stem(A,'filled','LineWidth',2);
title('Scaled signal');
xlim([1 length(A)]);
ylim([1 max(A)]);
grid on
