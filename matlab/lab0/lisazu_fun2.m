function lisazu_fun2(f1,f2)
% Skripts kas uzzime Lisažu figūras
%Call:
%lisazu_fun(f1,f2)

% 27.01.2020
% autors Austris
t =0:0.01:1;
%f1=9; f2=12;
x = cos(2*pi*f1*t);
y = sin(2*pi*f2*t);
plot(x,y)
shg
