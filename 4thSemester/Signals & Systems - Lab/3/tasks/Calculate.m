function [height_cm, weight_kg] = Calculate(height_in, weight_lb)

height_cm = height_in * 2.54;
weight_kg = weight_lb * 0.453592;

disp(['Height: ', num2str(height_cm), ' cm']);
disp(['Weight: ', num2str(weight_kg), ' kg']);

end
