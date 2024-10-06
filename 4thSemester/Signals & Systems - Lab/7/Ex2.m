n= -10:10; 
%unit step 
x1=[zeros(1,10) ones(1,11)]; 
stem(n,x1,'filled'); 
xlabel('sample #'); 
ylabel('signal amplitude'); 
title('Unit step'); 
axis([-10 10 -1 2]); 
