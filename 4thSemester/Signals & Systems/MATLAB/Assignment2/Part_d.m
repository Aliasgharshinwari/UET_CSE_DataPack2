% Define the independent variable
t = -10:0.1:10;

% Define the piecewise function
y1 = zeros(size(t)); % Initialize y with zeros
a = 1;
b =1;
% Piecewise function definition
for i = 1:length(t)
    y1(i) = a*i+b;
end


plot(t, y1, 'LineWidth', 2);
xlabel('t');
ylabel('x');
title('Output');
grid on;
