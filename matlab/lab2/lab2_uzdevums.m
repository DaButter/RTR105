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

solve(c+b*x+a*sqrt(x)==0,x)

%ans =
 
 %(a - (a^2 - 4*b*c)^(1/2))^2/(4*b^2)
 %(a + (a^2 - 4*b*c)^(1/2))^2/(4*b^2)

 
%% Iegutaas pretty atbildes

ans1 = (a - (a^2 - 4*b*c)^(1/2))^2/(4*b^2);
ans2 = (a + (a^2 - 4*b*c)^(1/2))^2/(4*b^2);
 
pretty(ans1)
pretty(ans2)

%           2          2
%(a - sqrt(a  - 4 b c))
%-----------------------
%             2
%          4 b
          
%                     2          
%(a + sqrt(a  - 4 b c))
%-----------------------
%             2
%          4 b
          
%% 2.uzdevums

%% 18. f(x)=x^3*cos(x) F(x)-? x pied. [-20;20]

% F(x) jamekle integralis
% f(x) un F(x) grafiku uzplotot kopaa

as = -10:0.01:10;
y1 = as.^3.*cos(as);
plot(as,y1);
hold on

%syms x 
% plotosanai ir 4 soli
int(x^3*cos(x),x)
answer = cos(x)*(3*x.^2 - 6)-sin(x)*(-x.^3 + 6*x);

x = -10:0.01:10;
plot(x,answer);

hold off

% skat. formulu graf attelosasa ievada simb mat