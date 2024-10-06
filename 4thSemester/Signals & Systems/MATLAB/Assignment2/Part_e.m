% Define the independent variable
t = -10:0.1:10;

% Define the piecewise function
y1 = zeros(size(t)); % Initialize y with zeros

% Piecewise function definition
for i = 1:length(t)
    if t(i) > 0.5 && t(i) <1.5 
        y1(i) = (-i +2.5).^2 -0.5;
    
    elseif t(i) >= 1.5 && t(i) < 2.5
        y1(i) = 0.5 - (-i+2.5).^2;
 
    elseif t(i) >= 2.5 && t(i) < 3.5
        y1(i) = -0.5 + (-i+3.5).^2;
    
    elseif t(i) >= 3.5 && t(i) < 4.5
        y1(i) = 0.5 - (-i+4.5).^2;

    elseif t(i) >= 4.5 && t(i) < 5.5
        y1(i) = -0.5 + (-i+5.5).^2;
        
    elseif t(i) >= 5.5 && t(i) < 6.5
        y1(i) = 0.5 - (-i+6.5).^2;
        
    elseif t(i) >= 6.5 && t(i) < 7.5
        y1(i) = -0.5 + (-i+7.5).^2;
        
    else
        y1(i) = 0;
    end
end


plot(t, y1, 'LineWidth', 2);
xlabel('t');
ylabel('x');
title('Output');
grid on;
