x=[2 5 8 4 3];
y=[4 3 2 0 0];

disp('Vector Sum:')
addition=x+y;
disp(addition)
disp('Vector Product:')
product=x.*y;
disp(product)

S =zeros(1,5);
disp('Using for loop:')
for j=1:5
    S(j)=x(j)+y(j);
end

disp(['Sum: ', num2str(S)]);

for j=1:5
    P(j)=x(j)*y(j);
end

disp(['Product: ',num2str(P)]);