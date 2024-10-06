k = -10:1/100:10; %number of square wave coefficients
T = 1; %time period of square wave
T1 = 1/4; %duty cycle of square wave
ak1 = sin(k*2*pi*(T1/T))./(k*pi); %square wave Fourier series coefficients
% Ignore the "divide by zero" warning that happens 
% because k in the denominator hits 0. We will now do 
% a manual correction for a0 ?> ak1(16) 
ak1(11) = 2*T1/T;
figure;
subplot(3,1,1);
plot(k,ak1);
ylabel('ak');
title('FS Coefficients for Periodic Square Wave (T=1, T1=1/4 and M=10)');

k = -20:1/100:20; %number of square wave coefficients
T = 1; %time period of square wave
T1 = 1/4; %duty cycle of square wave
ak1 = sin(k*2*pi*(T1/T))./(k*pi); %square wave Fourier series coefficients
% Ignore the "divide by zero" warning that happens 
% because k in the denominator hits 0. We will now do 
% a manual correction for a0 ?> ak1(16) 
ak1(21) = 2*T1/T;
subplot(3,1,2);
plot(k,ak1);
ylabel('ak');
title('FS Coefficients for Periodic Square Wave (T=1, T1=1/4 and M=20)');

k = -100:1/100:100; %number of square wave coefficients
T = 1; %time period of square wave
T1 = 1/4; %duty cycle of square wave
ak1 = sin(k*2*pi*(T1/T))./(k*pi); %square wave Fourier series coefficients
% Ignore the "divide by zero" warning that happens 
% because k in the denominator hits 0. We will now do 
% a manual correction for a0 ?> ak1(16) 
ak1(101) = 2*T1/T;
subplot(3,1,3);
plot(k,ak1);
ylabel('ak');
title('FS Coefficients for Periodic Square Wave (T=1, T1=1/4 and M=100)');