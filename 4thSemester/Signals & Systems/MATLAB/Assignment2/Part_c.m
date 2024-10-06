% Define the independent variable
t = -10:0.1:10;

% Define the piecewise function
y1 = zeros(size(t)); % Initialize y with zeros

% Piecewise function definition
for i = 1:length(t)
    if t(i) < 1
        y1(i) = 0;
    elseif t(i) >= 1 && t(i) < 3
        y1(i) = (2/pi)*(cos(pi*i)+1);
    else
        y1(i) = (-2/pi)*(cos(pi*i)+1);
    end
end


plot(t, y1, 'LineWidth', 2);
xlabel('t');
ylabel('x');
title('Output');
grid on;
