% Prompt the user to input a complex number
z = input('Enter a complex number: ');

% Compute the conjugate and inverse of z
z_conj = conj(z);
z_inv = 1/z;

% Display the results numerically using zprint
disp('z =');
zprint(z);

disp('z_conj =');
zprint(z_conj);

disp('1/z =');
zprint(z_inv);
