clc; clear; close all 
delta_n = 1;
n = 0:delta_n:19; % time duration of given signal; 
P=20;
f=1/P;
xn = cos(2*pi*f*n); % generate signal 
stem(n, xn); 
xlabel('n'); 
ylabel('Amplitude, A'); 
title('Discrete Time Cosine'); 
% plot signal 
abs_xt_2 = abs(xn).^2; % take absolute square of signal 
T=19; 
 
pxt = sum(abs_xt_2)*delta_n/T 
% length of interval 
% interval duration 
% power of given signal 
