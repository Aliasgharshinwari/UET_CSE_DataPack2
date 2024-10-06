[x,y] = meshgrid([-2:0.2:2]); 
% plot 3D on plane 
Z = x.*exp(-x.^2-y.^2); 
figure 
% surface plot, with gradient(Z) determining color distribution 
surf(x,y,Z,gradient(Z)) 
% display color scale, can adjust location similarly to legend 
colorbar
