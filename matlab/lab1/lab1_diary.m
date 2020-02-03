%% mērījumu datu apstrāde
% pienemsim, ka mums ir merijumi dat
%mainam U un mēram I
Vm = [-1 0.3 1.5 2.5 3.2];
Im = [1.1 2.2 2.1 3.2 4.7]*1e-3;
plot(Vm,Im,'-o')
% pielaikosim 2,kārtas plinomu
% y = a*x^2+b*x+c
%polyfit - meklē ploinomu koeficientus
% C = ployfit(x,y,N) ,kur N - polinoma kārta
C = polyfit(Vm,Im,2)

C =

    0.0002    0.0004    0.0015

y=C(1)*x^2+C(2)*x+C(3)
{Undefined function or variable 'x'.
} 
% y=C(1)*x^2+C(2)*x+C(3)
% definesim x ar mazaku soli
V = -1:0.01:3.2;
V = min(Vm):0.01:max(Vm);
V = linspace(min(Vm),max(Vm),100);
%augsejie 3 piemeri lidzvertigi
%liekam x izteiksmē
I = C(1)*V.^2+C(2)*V+C(3);
plot(Vm,Im,'o',V,I)
C = polyfit(Vm,Im,3)

C =

    0.0002   -0.0004    0.0003    0.0021

I = C(1)*V.^3+C(2)*V.^2+C(3)*V+C(4);
plot(Vm,Im,'o',V,I)
plot(Vm,Im,'-o',V,I)
%sis grafiks ir 3.kārtai. Ir daudz tuvāk realajam graf
C = polyfit(Vm,Im,4)

C =

   -0.0001    0.0004   -0.0006    0.0000    0.0022

I = C(1)*V.^4+C(2)*V.^3+C(3)*V.^2+C(4)*V+C(5);
plot(Vm,Im,'-o',V,I)
%4.kārtai ieprieksejais bija
%to pasu var izdarit ari sadi:
C = polyfit(Vm,Im,3);
%izmantosim polyval funkciju, kas aprekinas polinoma vertibas
%I = C(1)*V.^3+C(2)*V.^2+C(3)*V+C(4);
I = ployval(C,V);
{Undefined function or variable 'ployval'.
} 
I = polyval(C,V);
%sintakse y = polyval(C,x);
plot(Vm,Im,'-o',V,I)
%%uzdevums atkartot to pasu 4.kartai
C = polyfit(Vm,Im,4);
I = ployval(C,V);
{Undefined function or variable 'ployval'.
} 
I = polyval(C,V);
plot(Vm,Im,'-o',V,I)
C = polyfit(Vm,Im,4);
C = polyfit(Vm,Im,11);
[Warning: Polynomial is not unique; degree >= number of data
points.] 
[> In <a href="matlab:matlab.internal.language.introspective.errorDocCallback('polyfit', '/usr/local/MATLAB/R2018a/toolbox/matlab/polyfun/polyfit.m', 74)" style="font-weight:bold">polyfit</a> (<a href="matlab: opentoline('/usr/local/MATLAB/R2018a/toolbox/matlab/polyfun/polyfit.m',74,0)">line 74</a>)] 
C = polyfit(Vm,Im,6);
[Warning: Polynomial is not unique; degree >= number of data
points.] 
[> In <a href="matlab:matlab.internal.language.introspective.errorDocCallback('polyfit', '/usr/local/MATLAB/R2018a/toolbox/matlab/polyfun/polyfit.m', 74)" style="font-weight:bold">polyfit</a> (<a href="matlab: opentoline('/usr/local/MATLAB/R2018a/toolbox/matlab/polyfun/polyfit.m',74,0)">line 74</a>)] 
C = polyfit(Vm,Im,6);
[Warning: Polynomial is not unique; degree >= number of data
points.] 
[> In <a href="matlab:matlab.internal.language.introspective.errorDocCallback('polyfit', '/usr/local/MATLAB/R2018a/toolbox/matlab/polyfun/polyfit.m', 74)" style="font-weight:bold">polyfit</a> (<a href="matlab: opentoline('/usr/local/MATLAB/R2018a/toolbox/matlab/polyfun/polyfit.m',74,0)">line 74</a>)] 
C = polyfit(Vm,Im,6);
[Warning: Polynomial is not unique; degree >= number of data
points.] 
[> In <a href="matlab:matlab.internal.language.introspective.errorDocCallback('polyfit', '/usr/local/MATLAB/R2018a/toolbox/matlab/polyfun/polyfit.m', 74)" style="font-weight:bold">polyfit</a> (<a href="matlab: opentoline('/usr/local/MATLAB/R2018a/toolbox/matlab/polyfun/polyfit.m',74,0)">line 74</a>)] 
C = polyfit(Vm,Im,5);
[Warning: Polynomial is not unique; degree >= number of data
points.] 
[> In <a href="matlab:matlab.internal.language.introspective.errorDocCallback('polyfit', '/usr/local/MATLAB/R2018a/toolbox/matlab/polyfun/polyfit.m', 74)" style="font-weight:bold">polyfit</a> (<a href="matlab: opentoline('/usr/local/MATLAB/R2018a/toolbox/matlab/polyfun/polyfit.m',74,0)">line 74</a>)] 
C = polyfit(Vm,Im,4);
I = polyval(C,V);
plot(Vm,Im,'-o',V,I)
%gadijumā, kad pielaikotā polinoma kārta ir vienada ar (N-1), kur N=punktu skaits
%šādu gadijumu sauc par polinomiālo interpolāciju
%(polinoms iet tieši caur mērījumu punktiem)
%bet citos gadijumos, kad kārta bija mazāka par N-1, sauc par polinomiālo aproksimāciju
%(līnija negāja tieši caur punktiem)
C = polyfit(Vm,Im,11);
[Warning: Polynomial is not unique; degree >= number of data points.] 
[> In <a href="matlab:matlab.internal.language.introspective.errorDocCallback('polyfit', '/usr/local/MATLAB/R2018a/toolbox/matlab/polyfun/polyfit.m', 74)" style="font-weight:bold">polyfit</a> (<a href="matlab: opentoline('/usr/local/MATLAB/R2018a/toolbox/matlab/polyfun/polyfit.m',74,0)">line 74</a>)] 
I = polyval(C,V);
plot(Vm,Im,'-o',V,I)
%uzdevums atkārtot 1.kārtai
C = polyfit(Vm,Im,1);
I = polyval(C,V);
plot(Vm,Im,'-o',V,I)
%% Mērījumu sērijas
%pieņemsim, ka mēs katrai U vērtībai I nomērīsim 5 reizes
Vm = [-1 0.3 1.5 2.5 3.2];
Im = [1.1 2.2 2.1 3.2 4.7;]*1e-3;
Im = [1.1 2.2 2.1 3.2 4.7;]*1e-3;
Im = [1.1 2.2 2.1 3.2 4.7;
         0.9 1.8 2.6 3.3 4.5
         1.0 2.0 2.4 3.4 4.3
         0.8 2.1 2.5 3.2 4.6;
Im = [1.1 2.2 2.1 3.2 4.7;
 Im = [1.1 2.2 2.1 3.2 4.7;
    ↑
{Error: Incorrect use of '=' operator. To assign a value to a variable, use '='. To compare values for
equality, use '=='.
} 
Im = [1.1 2.2 2.1 3.2 4.7;
         0.9 1.8 2.6 3.3 4.5;
         1.0 2.0 2.4 3.4 4.3;
         0.8 2.1 2.5 3.2 4.6;
         0.9 1.9 2.3 3.2 4.4;]

Im =

    1.1000    2.2000    2.1000    3.2000    4.7000
    0.9000    1.8000    2.6000    3.3000    4.5000
    1.0000    2.0000    2.4000    3.4000    4.3000
    0.8000    2.1000    2.5000    3.2000    4.6000
    0.9000    1.9000    2.3000    3.2000    4.4000

%zimesana
figure
plot(Vm,Im,'-o')
%matlab zīmē matricas pa kolonnām
%mūsu dati bija ierakstiti pa rindām
%tāpēc ir jātransponē matrica
plot(Vm,Im','-o') %ielikta pirms Im transponesanas zīme
%pielaikosim polinomu
%f-cija ployfit strādā tikai vektoriem (matricām nē)
Im

Im =

    1.1000    2.2000    2.1000    3.2000    4.7000
    0.9000    1.8000    2.6000    3.3000    4.5000
    1.0000    2.0000    2.4000    3.4000    4.3000
    0.8000    2.1000    2.5000    3.2000    4.6000
    0.9000    1.9000    2.3000    3.2000    4.4000

A=[1 2 3 4 5];
sum(A)

ans =

    15

sum(Im)

ans =

    4.7000   10.0000   11.9000   16.3000   22.5000

%vidējā vērtība:
Ividejais = sum(Im)/5

Ividejais =

    0.9400    2.0000    2.3800    3.2600    4.5000

sum(Im,1) %summe rindas

ans =

    4.7000   10.0000   11.9000   16.3000   22.5000

% ,1 summ\e elementrus katrā kolonnā!!
sum(Im,2) %summē elementus katrā rindā

ans =

   13.3000
   13.1000
   13.1000
   13.2000
   12.7000

Ivid = mean(Im);
Ivid = mean(Im)

Ivid =

    0.9400    2.0000    2.3800    3.2600    4.5000

% pielaikosim polinomu
C=polyfit(Vm,Ivid,3);
V = linspace(min(Vm),max(Vm),100);
I = polyval(C,V);
%%uzdevums attēlot grafiku:
%ar 'o''attēlot mērījumu datus 
%ar '+' attēlot vidējo vērtību
% ar '-' att. pielaikoto polinomu
plot(Ivid,Vm);
plot(Ivid,Vm,'o');
plot(Ivid,Vm,'o');
hold on
plot(Ivid,'*');
plot(C,'-');
hold off
figure
plot(Vm,Im','o',Vm,Ivid,'*',V,I)

Inovirze = std(Im) %standartnovirze

Inovirze =

    0.1140    0.1581    0.1924    0.0894    0.1581

errorbar(Vm,Ivid,Inovirze)
errorbar(Vm,Ivid,Inovirze,'.')
hold on
plot (V,I)
hold off
xlabel('U,V')
ylabel('I, mA')
title('Strāvas atkarība no sprieguma')
legend('eksperimentalie dati','pielaikotais polinoms')_
 legend('eksperimentalie dati','pielaikotais polinoms')_
                                                       ↑
{Error: Invalid text character. Check for unsupported symbol,
invisible character, or pasting of non-ASCII characters.
} 
legend('eksperimentalie dati','pielaikotais polinoms')
gird
{Undefined function or variable 'gird'.
} 
grid
ls
bilde1.png  bilde2.png	lab1_diary.m

%% Datu nolasīšana no grafika
A = imread('bilde1.png');
B = imread('bilde2.png');
figure(1),image(A)
figure(2),image(B)
figure(2),image([500 800],[0 1],B)
figure(2),image([500 800],[1 0],B)
set(gca,'YDir','normal')
%varam nolasit grafiku
%izmantojot funkciju ginput(N)
[x,y] = ginput(10)

x =

  559.7919
  572.7221
  585.6522
  610.7044
  624.8468
  633.9383
  643.0298
  659.1925
  707.0746
  713.7417


y =

    0.0142
    0.0567
    0.1325
    0.4974
    0.9035
    0.9883
    0.9087
    0.4563
    0.0271
    0.0117

hold on
plot (x,y,'o')
diary off
