%%
%noisy audio
[signal,fs]=audioread('../Noisy Audio Sample/noisy.wav');
L = length(signal);
plot(signal);
%%
signalT = fft(signal);
f=fs*(1:(L))/(2*L);
plot(f,abs(signalT));
title('Spectrum');
xlabel('Frequency');
ylabel('Amplitude');
%ylim([-1 35]);
figure;
plot(angle(signalT));
title('Phase');
xlabel('Frequency(Hz)');
ylabel('Phase');
%%
%System function
b=[1 0 0 0 0 0 0 0 -1];
a=[1 -1];
[h,w]=freqz(b,a);
figure;
plot(w/pi,abs(h));
title('Spectrum');
ax=gca;
ax.XTick=0:0.25:1;
xlabel('Frequency (\times\pi rad/sample)');
ylabel('Magnitude');
figure;
plot(w/pi,angle(h));
title('Phase');
ax=gca;
ax.XTick=0:0.25:1;
xlabel('Frequency (\times\pi rad/sample)');
ylabel('Magnitude');%This is a Low Pass Filter

%%
%Zeros and Poles
fvtool(b,a,'polezero')
[b,a] = eqtflength(b,a);
tf2zp(b,a);

%%
%Impulse response
figure;
[impResp,t] = impz(b,a);
stem(t,impResp);
title('Impulse Response')

%%
%Filtering by the initial filter
% Merge all channels into a single channel
mergedSignal = sum(signal, 2);

% Normalize the merged signal (optional)
mergedSignal = mergedSignal / max(abs(mergedSignal));

% Filter by the initial filter
filteredSignal = conv(impResp, mergedSignal);
audiowrite('filtered1.wav', filteredSignal, fs);

% Iterate the filtering process
for i = 2:8
    filteredSignal = conv(impResp, filteredSignal);
    audiowrite(sprintf('filtered%d.wav', i), filteredSignal, fs);
end
%%
%Filtering by modified filter
b=[1/4 0 0 0 0 0 0 0 -1/4];
a=[1 -1];

[impRespPlus, ~] = impz(b, a);
filteredSignalPlus = conv(impRespPlus, mergedSignal);
audiowrite('filtered1Plus.wav', filteredSignalPlus, fs);

% Iterate the filtering process
for i = 2:8
    filteredSignalPlus = conv(impRespPlus, filteredSignalPlus);
    audiowrite(sprintf('filtered%dPlus.wav', i), filteredSignalPlus, fs);
end