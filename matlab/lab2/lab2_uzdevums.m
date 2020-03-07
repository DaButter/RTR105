%% Ievads simboliskaja matematikaa

%% Merkis: 
% * Iepazities ar matlaba simbolisko matematiku
%% 1.uzdevums

%% Mainigo definesana

syms a
syms b
syms c
syms x

%% Funkcija solve

%no funckijas atrast x
solve(c+b*x+a*sqrt(x)==0,x)

%% Iegutaas pretty atbildes

ans1 = (a - (a^2 - 4*b*c)^(1/2))^2/(4*b^2);
ans2 = (a + (a^2 - 4*b*c)^(1/2))^2/(4*b^2);
 
pretty(ans1)
pretty(ans2)
          
%% 2.uzdevums

% 18. f(x)=x^3*cos(x) F(x)-? ,ja x pieder [-20;20]

% F(x) jamekle integralis
% f(x) un F(x) grafiku uzplotot kopaa

%originalais grafiks
y1 = x.^3.*cos(x);
%integreta atbilde, simplificeta
y1i = simplify(int(x^3*cos(x),x));

% Izteiksmes vektorizacija
y1v = vectorize(y1);
y1iv = vectorize (y1i);

%x definesana
x = -20:0.01:20;

%interpretatora funkcija
y1vm = eval(y1v);
y1ivm = eval(y1iv);

%grafiks
plot(x,y1vm,x,y1ivm)
grid

%% Secinajumi 

% Simboliskos mainigos matlaba izmanto izmanto, lai definetu tos ka
% mainigos lielumus kadaa funkcijaa. Si laboratorijas darba del, esmu
% apguvis grafika plotosanu, izmantojot syms mainigos, ka ari apguvis
% integresanas, solve, eval, simplify, pretty funckijas.
