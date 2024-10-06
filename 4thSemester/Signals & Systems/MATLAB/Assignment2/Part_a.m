t = -10:0.1:10;
y1 = zeros(size(t)); % Initialize y with zeros
y2 = zeros(size(t)); % Initialize y with zeros
a=1;
b=1;
for i = 1:length(t)
    if t(i) < 0
        y1(i) = 0;
    elseif t(i) >= 0
        y1(i) = (exp(-b*i)/(b-a))*(exp(i*(b-a))-1);
    end
end

subplot(2,1,1);
plot(t, y1, 'LineWidth', 2);
xlabel('t');
title('Alpha not equal to Beta');
grid on;

for i = 1:length(t)
    if t(i) < 0
        y2(i) = 0;
    elseif t(i) >= 0
        y2(i) = i*exp(-b*i);
    end
end


subplot(2,1,2);
plot(t, y2, 'LineWidth', 2);
xlabel('t');
title('Alpha equal to Beta');
grid on;