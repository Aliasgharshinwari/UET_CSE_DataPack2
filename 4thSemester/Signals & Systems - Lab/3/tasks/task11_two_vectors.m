vec1 = input('Enter the first vector: ');

%vec2 = [];
while length(vec2) ~= length(vec1)
    vec2 = input('Enter the second vector (same size as first vector): ');
end

vec3 = vec1.^2 + vec2.^2;

disp(['The vector that contains the sum of squares of corresponding entries of both vectors is:']);
disp(vec3);
