clc 
clear 
close all 

t=0:0.0001:8; 
ff=1; 

% WE ARE USING SINE FUNCTION BECAUSE FROM EXPONENTIAL FORM OF FOURIER 
% SERIES FINALLY WE ARE LEFT WITH SINE TERMS 
y = sin(2*pi*ff*t); 
% COMPLEX AMPLITUDE = (4/(j*pi*k)) 
for k = 3:2:9 
    fh=k*ff; 
    x = (sin(2*pi*fh*t))/k; 
    y=y+x; 
end 
plot(t,y,'linewidth',1.5); 
title('A square wave with harmonics 1st, 3rd, 5th, 7th and 9th'); 
xlabel('Time'); 
ylabel('Amplitude');