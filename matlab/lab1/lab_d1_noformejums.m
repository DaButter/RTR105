%% 1.laboratorijas darbs (šis kods ir tieši priekš publish)
%% Merijumu datu apstrade
%% Merki:
% * Iemacities apstradat merijumu datus
% * Iemacities lietot polyfit, polyval funkcijas
% * Iemacities veidot matlab atskaites izmantojot "publish"
%% Darba programma:
%
% A = imread('polyfit_grafiks.png'); //ivieto attelu matlabaa
%
% figure(1),image(A) //atver attelu
%
% figure(1),image([0 100],[10 0],A) //noregule x y asu vertibas
%
% set(gca,'YDir','normal') //noregule attela orientaciju
%
% [x,y] = ginput(20) //ar so nolasa punktus no grafika
%
% p = polyfit(x,y,5);
%
% xx=min(x):1:max(x); //min x lidz max x papildus x ieliek, lai smukaks grafiks
%
% yy= polyval(p,xx);
%
% plot(x,y,'o',xx,yy);
%
% grid minor
%
%% Izmatotais sakuma grafiks
%
% <<../polyfit_grafiks.png>>
%
%% Ar polyfit,polyfind iegutais grafiks
%
% <<../grafiks_ginput.png>>
%
%% Secinajumi
%
% Saja laboratorjas darba iemacijos "imread" komandu, un "ginput" komandu, ar
% kuru nolasa vertibas no grafika attela izpildot pelites klikski.
% Izmantojot ar ginput nolasitos datus, iespejams matlabam likt konstruet
% grafiku no ginputa iegutajiem punktie ar funkcijam "polyfit" un
% "polyval". 
% Iemacijos ievietot attelus "publish pdf" un noformet laboratorijas darbu
% atbilstosi prasibam.
