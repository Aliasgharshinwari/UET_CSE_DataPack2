clear 
n=1:1/1000:5;
y=5*exp(5*n*pi/4);
subplot(2,1,1);
plot(n,y, 'g', 'linewidth',2);
xlabel('time'); 
ylabel('signal amplitude');
title('Original Signal');
grid;

subplot(2,1,2);
plot(-n,y, 'r', 'linewidth',2);
xlabel('time'); 
ylabel('signal amplitude'); 
title('Flipped Signal'); 
grid;