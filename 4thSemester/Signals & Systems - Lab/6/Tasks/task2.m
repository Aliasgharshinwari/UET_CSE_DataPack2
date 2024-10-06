% Create a vector of x-values from -1 to 1
x = linspace(-1, 1);

% Create a vector of n-values from 1 to 8
n_val = 1:8;

% Create a new figure
figure;

% Loop over the n-values and plot sin(n?x) against x
for i = 1:length(n_val)
    n = n_val(i);
    y = sin(n*pi*x);
    plot(x, y, 'LineWidth', 2);
    hold on;
end

% Label the x-axis and y-axis
xlabel('x');
ylabel('sin(n\pi x)');

% Set the title of the figure
title('Graphs of sin(n\pi x) for n = 1, 2, ..., 8');

% Add a legend to the figure
legend('n = 1', 'n = 2', 'n = 3', 'n = 4', 'n = 5', 'n = 6', 'n = 7', 'n = 8');
