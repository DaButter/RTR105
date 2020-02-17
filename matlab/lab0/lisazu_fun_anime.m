function lisazu_fun_anime(f1,f2)
% Skripts kas uzzime Lisažu figūras
%Call:
%lisazu_fun(f1,f2)

% 27.01.2020
% autors Austris
t =0:0.01:1;
%f1=9; f2=12;
for faze = 0:pi/100:2*pi
    x = cos(2*pi*f1*t+faze);
    y = sin(2*pi*f2*t); 
    plot(x,y)   
    pause(0.1)
end
shg
