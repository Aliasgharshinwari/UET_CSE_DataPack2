function sorted_array = bubble_sort(ar)

n = length(ar);
for i = 1:n-1
    for j = 1:n-i
        if ar(j) > ar(j+1)
            temp = ar(j);
            ar(j) = ar(j+1);
            ar(j+1) = temp;
        end
    end
end
sorted_array = ar;
end
