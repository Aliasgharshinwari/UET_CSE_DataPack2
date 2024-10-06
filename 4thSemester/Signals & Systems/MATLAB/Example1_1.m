y = -2:0.1:2;
for i=1:21
if y(i)>=0 && y(i)<=1
    %f(i)=y(i);
    f(i)=1;
elseif y(i)>=1 && y(i)<=2
    f(i)=- y(i);
else
    f(i)=0;
end
end
plot(y,f)
axis([-1 1 -1 1])
