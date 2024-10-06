x=-5:0.1:5;

y1=2*x+3;
y2=4*x+3;

plot(x,y1,'--r', x,y2,':b');
xlabel('x');
ylabel('y'); 
legend('y1 = 2x + 3', 'y2 = 4x + 3');