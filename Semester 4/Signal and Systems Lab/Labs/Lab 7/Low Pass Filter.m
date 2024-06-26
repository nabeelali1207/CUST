function Hd = Low Pass Filter
%LOW PASS FILTER Returns a discrete-time filter object.

% MATLAB Code
% Generated by MATLAB(R) 9.4 and Signal Processing Toolbox 8.0.
% Generated on: 08-May-2019 11:14:44

% Equiripple Lowpass filter designed using the FIRPM function.

% All frequency values are in Hz.
Fs = 44100;  % Sampling Frequency

N     = 25;    % Order
Fpass = 10;    % Passband Frequency
Fstop = 5000;  % Stopband Frequency
Wpass = 1;     % Passband Weight
Wstop = 50;    % Stopband Weight
dens  = 20;    % Density Factor

% Calculate the coefficients using the FIRPM function.
b  = firpm(N, [0 Fpass Fstop Fs/2]/(Fs/2), [1 1 0 0], [Wpass Wstop], ...
           {dens});
Hd = dfilt.dffir(b);

% [EOF]
