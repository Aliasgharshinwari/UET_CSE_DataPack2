k=-80:80; 
T1=0.25;
T=1;
w0=2*pi/T;
%Time Period
%Fundamental Frequency
ak = sin (k*2*pi* (T1/T))./ (k*pi); % Fourier Series Coefficients Manual correction for a0 ?> ak (51)
ak (81)=2*T1/T;
t= -1.5:0.005:1.5; % Time Duration
xt = zeros (1, length (t));
for k=-80:80
    %Square Wave Reconstruction
    xt = xt + ak (k+81) *exp(1j*k*2*pi/T*t);
end

%Plot Section
%Plotting the original signal
figure(1);
subplot (3,1,1);
%declaring subplot
plot (t, real (xt), 'linewidth', 2);
%Labels in the plot
xlabel('t');
ylabel('x(t)')
title('Original Signal')
grid;


%Plotting the reversed signal directly
subplot (3,1,2); %declaring subplot
plot (t,-real (xt), 'linewidth', 2); 
%Labels in the plot 
xlabel('t'); 
ylabel('x(t)')
title ('Reverse Version of the signal directly')
grid;
t0=0.25;
WO = 2*pi/T;
sk= ak.*exp(-j*k*w0*t0);
a_k = fliplr (sk);
%Using the built-in command to reverse the signal
yt = zeros(1, length (t));
% Reconstruction of the signal using negative ak''s for k=-80:80
for k=-80:80
    yt = yt + a_k (k+81) *exp(j*k*2*pi/T*t);
end

%Plotting the reversed signal using ak's
subplot (3,1,3); 
%declaring subplot
plot (t,-real (yt), 'linewidth',2);
%Labels in the plot
xlabel('t');
ylabel('x(t)')
title('Time Reversed Signal Using FS Coefficients ak''s');
grid;