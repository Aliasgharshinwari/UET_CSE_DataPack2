function i = bin_search(ar, val)

n = length(ar);
low = 1;
high = n;
while low <= high
    mid = floor((low + high) / 2);
    if ar(mid) == val
        i = mid;
        return
    elseif ar(mid) < val
        low = mid + 1;
    else
        high = mid - 1;
    end
end
i = -1;
end