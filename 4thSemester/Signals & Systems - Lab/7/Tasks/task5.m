clear 
n=0:10;
y = 2*[n==0]+ 5*[n==1] + 8*[n==2] + 4*[n==3] + 3*[n==4]; 
subplot(2,1,1);
stem(n,y, 'g', 'linewidth',2); 
%axis([-5 5 -10 10]); 
xlabel('time'); ylabel('signal amplitude');
title('Original Signal'); 
grid;

subplot(2,1,2);
stem(-n,y, 'r', 'linewidth',2); 
%axis([-5 5 -10 10]);
xlabel('time'); ylabel('signal amplitude'); 
title('Flipped Signal'); 
grid;