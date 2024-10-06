% Ask the user for a discrete-time signal
x = input('Enter a discrete-time signal: ');

% Initialize the count to zero
count = 0;

% Loop through each sample in the signal
for i = 1:length(x)
    % If the sample is greater than 3 or less than -3, increment the count
    if x(i) > 3 || x(i) < -3
        count = count + 1;
    end
end

disp(['The number of samples with amplitude greater than 3 and less than -3 is:', num2str(count)]);
