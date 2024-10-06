clc 
clear all 
close all
n = -3:1/10:3; % duration of signal
% dc component for k=0 
f=5;
x0 = 1; 
y1 = x0; % sum of dc component and first harmonic
% second harmonic components for k=?2 and k=2
x2 = exp(j*(pi/4)*n*f)+exp(j*(pi/4)*n*f);
y2 = y1 + x2; % sum of all components until second harmonic
% third harmonic components for k=?3 and k=3
x4 = exp(j*(pi/3)*n*f)+exp(j*(pi/3)*n*f);
x = x0 + x2 + x4; % sum of all components until third harmonic
figure;
subplot(2,2,1);
stem(n,x2,'filled'); 
axis([-3 3 -2 2]); 
title('x2(t)');
subplot(2,2,2);
stem(n,y2,'filled'); 
axis([-3 3 -1 3]);
title('x0(t)+x2(t)');
subplot(2,2,3);
stem(n,x4,'filled');
xlabel('t'); 
axis([-3 3 -2 2]); 
title('x4(t)');
subplot(2,2,4);
stem(n,x,'filled');
xlabel('t'); 
axis([-3 3 -3 5]);
title('x(t)=x0(t)+x2(t)+x4(t)')
