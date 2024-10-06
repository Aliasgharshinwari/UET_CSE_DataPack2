clc
clear

Temp_F = input('Enter Temperature in Farhenheit:\n');
Temp_C = (Temp_F - 32)/(1.8);

disp('Temperature in Centigrade:');
disp(Temp_C)