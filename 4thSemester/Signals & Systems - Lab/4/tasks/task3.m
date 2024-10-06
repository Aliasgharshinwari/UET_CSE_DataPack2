x1=[1 2 2 1 1];
x2=[3 2 0 1 2];
index = []; 

for i = 1:length(x1)
    if abs(x1(i)) < abs(x2(i))
        index(end+1) = i;
    end
end

if isempty(index)
    disp('All samples in x1 have larger amplitude than the corresponding samples in x2.');
else
    disp(['The index where x1 has smaller amplitude than x2 is ', num2str(index), '.']);
end
