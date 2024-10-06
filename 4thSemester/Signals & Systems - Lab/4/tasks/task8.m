x = input('Enter a discrete-time signal: ');
y = myDownsample(x);
z = myDownsample(x);

subplot(3, 1, 1);
stem(x,'filled','LineWidth',2);
title('Original signal');
xlim([1 length(x)]);
grid on

subplot(3, 1, 2);
stem(y,'filled','LineWidth',2);
title('Downsampled signal (my function)');
xlim([1 length(x)]);
grid on


subplot(3, 1, 3);
stem(z,'filled','LineWidth',2);
title('Downsampled signal built-in)');
xlim([1 length(x)]);
grid on