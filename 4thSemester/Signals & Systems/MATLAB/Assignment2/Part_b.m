t = -10:0.1:10;
y1 = zeros(size(t)); % Initialize y with zeros

for i = 1:length(t)
    if t(i) < 1
        y1(i) = exp(2*i) * (-exp(-4) + 0.5 +0.5*exp(-10));
    elseif t(i) >= 1 && t(i) < 3
        y1(i) = -exp(2*(i-2))-exp(-2)+ 0.5 +0.5*exp(2*(i-5));
    elseif t(i) >= 3 && t(i) < 6
        y1(i) = 0.5*(exp(2*i-10)-exp(2));
    else
        y1(i)=0;
    end
end


plot(t, y1, 'LineWidth', 2);
xlabel('t');
ylabel('x');
title('Output');
grid on;
