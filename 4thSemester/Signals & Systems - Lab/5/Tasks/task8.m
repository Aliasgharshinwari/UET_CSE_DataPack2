% Define the complex exponential signal x1
n = 0:20;
x1 = 5*exp(1i*n*pi/4);

% Define the variable signal x2
a1 = 0.5;
a2 = 2;
x2_1 = a1*ones(size(n));
x2_2 = a2*ones(size(n));

% Compute the point-by-point multiplication of x1 and x2
y1 = x1 .* x2_1;
y2 = x1 .* x2_2;

% Plot the real and imaginary parts of the resulting signal
figure;
subplot(2,2,1);
stem(n, real(y1));
xlabel('n');
ylabel('Re[y_1]');
title(['Multiplication of x_1 and x_2, a = ' num2str(a1)]);

subplot(2,2,2);
stem(n, imag(y1));
xlabel('n');
ylabel('Im[y_1]');
title(['Multiplication of x_1 and x_2, a = ' num2str(a1)]);

subplot(2,2,3);
stem(n, real(y2));
xlabel('n');
ylabel('Re[y_2]');
title(['Multiplication of x_1 and x_2, a = ' num2str(a2)]);

subplot(2,2,4);
stem(n, imag(y2));
xlabel('n');
ylabel('Im[y_2]');
title(['Multiplication of x_1 and x_2, a = ' num2str(a2)]);
%sgtitle('Point-by-Point Multiplication of Complex Signals');

% Adjust plot settings
%set(gcf,'color','w');
%set(findall(gcf,'-property','FontSize'),'FontSize',12);
%set(findall(gcf,'-property','LineWidth'),'LineWidth',1.5);
