function zprint(z)
    X = real(z);
    Y = imag(z);
    Magnitude = abs(z);
    Phase_rad = angle(z);
    Phase_deg = rad2deg(Phase_rad);
    disp(table(X, Y, Magnitude, Phase_rad, Phase_deg));
end
