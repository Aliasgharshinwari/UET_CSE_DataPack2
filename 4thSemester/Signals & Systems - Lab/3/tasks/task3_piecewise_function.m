clear all
clc

b = 12;

a = 1:16;
C = zeros(size(a));

for i = 1:length(a)
    if a(i) >= 1 && a(i) <= 8
        C(i) = 4*a(i)*b;
    elseif a(i) > 8 && a(i) <= 16
        C(i) = a(i)*b;
    end
end
disp(['a = ', num2str(a)]);
disp(['C = ', num2str(C)]);