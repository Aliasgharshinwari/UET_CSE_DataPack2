clear 
n=1:7; 
x=[1 2 2 3 2 2 1]; 
subplot(2,1,1); 
stem(n,x, 'filled'); 
title('Original signal'); 
xlabel('Time index'); 
ylabel('Signal Amplitude'); 
axis([1 7 0 4]); 
grid; 
S=2; 
subplot(2,1,2); 
stem(n,S*x, 'filled'); 
title('Amplitude Scaled signal'); 
xlabel('Time index'); 
ylabel('Signal Amplitude'); 
axis([1 7 0 8]); grid;