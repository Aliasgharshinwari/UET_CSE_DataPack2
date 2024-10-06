t=0:0.001:10;
f=.25;

y=sin(2*pi*f*t)+(1/3)*sin(3*2*pi*f*t)- (1/5)*sin(5*2*pi*f*t) + (1/7)*sin(7*2*pi*f*t) - (1/9)*sin(9*2*pi*f*t);

plot(y);