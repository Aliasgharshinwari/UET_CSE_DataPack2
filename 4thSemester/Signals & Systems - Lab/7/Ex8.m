clear 
x=[1 2 3 2 1]; 
y=[x x x x]; 
subplot(2,1,1); 
stem(x,'filled'); 
title('Original Signal'); 
xlabel('Sample Number'); 
ylabel('Signal Amplitude'); 
axis([1 20 0 3]); 
grid; 
subplot(2,1,2); 
stem(y,'filled'); 
title('Replicated Signal'); 
xlabel('Sample Number'); 
ylabel('Signal Amplitude'); 
axis([1 20 0 3]); 
grid; 