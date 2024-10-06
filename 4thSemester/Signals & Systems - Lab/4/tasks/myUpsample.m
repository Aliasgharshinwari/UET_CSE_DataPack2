function y = myUpsample(x)
    y = zeros(1, length(x) * 2);
    y(1:2:end) = x;
end
