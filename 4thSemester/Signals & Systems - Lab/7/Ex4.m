clear 
n=-1:1/1000:1; 
x1=5*sin(2*pi*1*n); 
subplot(2,1,1); 
plot(n,x1, 'g', 'linewidth',2); 
axis([-1 1 -5 5]); 
xlabel('time'); 
ylabel('signal amplitude'); 
title('Original sine wave'); 
grid; 
subplot(2,1,2); 
plot(-n,x1, 'r', 'linewidth',2); 
axis([-1 1 -5 5]); 
xlabel('time'); 
ylabel('signal amplitude'); 
title('Flipped sine wave'); 
grid;