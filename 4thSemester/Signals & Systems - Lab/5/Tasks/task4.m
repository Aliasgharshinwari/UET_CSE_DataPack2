% Prompt the user to input two complex numbers
z1 = input('Enter the first complex number: ');
z2 = input('Enter the second complex number: ');

% Compute the sum of z1 and z2
z_product = z1 * z2;
z_qoutient = z1 / z2;

% Display the results numerically using zprint
disp('z1 x z2 =');
zprint(z_product);

% Display the results numerically using zprint
disp('z1 / z2 =');
zprint(z_qoutient);
