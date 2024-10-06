clear 
x=[3 4 4 2 1 -4 4 -2]; 
len=length(x); 
y=x; 
hi=3; 
lo=-3; 
for i=1:len 
    if(y(i)>hi) 
        y(i)=hi; 
    elseif(y(i)<lo) 
        y(i)=lo; 
    end 
end 
subplot(2,1,1); 
stem(x,'filled'); 
title('original signal'); 
xlabel('Sample number'); 
ylabel('Signal Amplitude'); 
subplot(2,1,2); 
stem(y,'filled'); 
title('Clipped Signal'); 
xlabel('Sample number'); 
ylabel('Signal Amplitude'); 