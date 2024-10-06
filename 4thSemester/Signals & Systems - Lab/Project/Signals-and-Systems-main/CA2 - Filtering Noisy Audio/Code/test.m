%noisy audio
[signal,fs]=audioread('../Noisy Audio Sample/noisy.wav');
L = length(signal);
signalT = fft(signal);
f=fs*(1:(L))/(2*L);
plot(f,abs(signalT));
title('Spectrum');
xlabel('Frequency'); ylabel('Amplitude');
%ylim([-1 35]);

figure;
[filteredSignal,fs]=audioread('./filtered8Plus.wav');
L1 = length(filteredSignal);
filteredSignalT = fft(filteredSignal);
f=fs*(1:(L1))/(2*L1);
plot(f,abs(filteredSignalT));
title('Filtered Spectrum');
xlabel('Frequency'); ylabel('Amplitude');
%ylim([-1 35]);