%% 3.laboratorijas darbs
%% Funkcijas grafika izveide no variakam dalam
%% Merkis:
% * Iemacities nolasit un sadalit doto grafiku dalaas
% * Iemacities apvienot visas funkcijas viena kopejaa plotaa

%% Darba programma:

% function DA
t_sin = 0:0.01:1.5;
t_noise = 1.5:0.01:3;
t_lin = 3:0.01:5;
t_const1 = 5:0.01:7;
t_const2 = 7:0.01:8.5;


% sinusoida
A0 = 0;
A = 0.5;
T = 1;
f = 1/T;
delay = 0;
y_sin = A0+A*sin(2*pi*f*(t_sin-delay));

% noise
y_noise = 0.5*rand(size(t_noise))-0.25;

% Lineara f-cija
delay = 3;
k=(-0.5-0.5)/(3-5);
y_lin = k * (t_lin-delay)-0.5;

% const 1
y_const1 = 0.5+zeros(size(t_const1));

% const 2
y_const2 = zeros(size(t_const2));

%% Iegutais grafiks

t = [t_sin,t_noise,t_lin,t_const1,t_const2];
y = [y_sin, y_noise,y_lin,y_const1,y_const2];
plot(t,y)
axis([0 9 -1 1]);
grid

%% Secinajumi
% Saja laboratorijas darba iemacijos vairakas funkcijas apvienot vienaa
% kopejaa plotaa un uzzimet vienaa grafikaa. Tas, ka apvieno vienaa plotaa, papildus izveido ari
% nepieciesamaas vertikalas linijias grafikaa (kas savieno vienu funkciju
% ar citu). Iemacijos definet xmin xmax ymin ymax vertibas uz grtafika ar
% funkciju 'axis'. Sis laboratorijas darbs ir lietderigs, jo var noderet
% dazadu laboratorijas darbu noformesanai citos prieksmetos.
