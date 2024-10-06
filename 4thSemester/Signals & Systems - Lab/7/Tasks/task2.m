t=-10:10;
a=[zeros(1,10),ones(1,11)];
b=[zeros(1,11),ones(1,10)];

subplot(3,1,1);
stem(t,a);

subplot(3,1,2);
stem(t,b);
x=a-b;

subplot(3,1,3);
stem(t,x);
