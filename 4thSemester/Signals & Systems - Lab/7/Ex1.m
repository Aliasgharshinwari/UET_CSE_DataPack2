n=-10:10; 
% unit impulse 
x1=[zeros(1,10) 1 zeros(1,10)]; 
stem(n,x1,'filled'); 
xlabel('sample #'); 
ylabel('signal amplitude'); 
title('Unit impulse'); 
axis([-10 10 -1 2]); 