x1 = input('Enter the first signal: ');
x2 = input('Enter the second signal: ');

add_result = signal_addition(x1, x2);
mult_result = signal_multiplication(x1, x2);

subplot(2,2,1);
stem(x1,'filled','LineWidth',2);
title('Original Signal 1');
ylim([1 max(add_result)]);

subplot(2,2,2);
stem(x2,'filled','LineWidth',2);
title('Original Signal 2');
ylim([1 max(add_result)]);

subplot(2,2,3);
stem(add_result,'filled','LineWidth',2);
title('Resultant from Addition');
ylim([1 max(add_result)]);

subplot(2,2,4);
stem(mult_result,'filled','LineWidth',2);
title('Resultant from Multiplication');
ylim([1 max(mult_result)]);
