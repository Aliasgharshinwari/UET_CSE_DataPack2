clear all
clc
t1 = clock;
%tic
%This is input vector x in the interval [-pi,pi]
x = -pi:0.01:pi
y = sin(x)

%This is going to plot vector x in the interval [-pi,pi]
plot(x,y)
grid on
%toc
disp('Time Taken');
disp(etime(clock,t1));

%save('sinPlot.mat','x','y','-v7.3','-nocompression')