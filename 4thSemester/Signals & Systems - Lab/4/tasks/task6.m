% Define the signals
n = 0:10;
x1 = 2*[n==0] + 5*[n==1] + 8*[n==2] + 4*[n==3] + 3*[n==4];
x2 = [n==4] + 4*[n==5] + 3*[n==6] + 2*[n==7];

% Add the signals
y = x1 + x2;

% Plot the signals
subplot(3,1,1);
stem(n,x1,'filled');
title('x1[n]');
xlabel('n');
ylabel('Amplitude');
grid on;

subplot(3,1,2);
stem(n,x2,'filled');
title('x2[n]');
xlabel('n');
ylabel('Amplitude');
grid on;

subplot(3,1,3);
stem(n,y,'filled');
title('y[n]=x1[n]+x2[n]');
xlabel('n');
ylabel('Amplitude');
grid on;
