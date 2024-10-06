function [a] = sig_causal(s,v)
t=[1:length(s)];
u=(t>v);
a=s.*u;
end