clear all
clc

b = 12;
a = 1:10;
C = zeros(size(a));

for i = 1:length(a)
    if a(i) < 3
        C(i) = a(i).^2;
    elseif a(i) >= 3 && a(i) < 7
        C(i) = a(i)+3;
    elseif a(i) > 7
        C(i) = a(i);
    end
end

disp(['a = ', num2str(a)]);
disp(['C = ', num2str(C)]);