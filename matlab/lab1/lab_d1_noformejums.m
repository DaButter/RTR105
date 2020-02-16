%% 1.laboratorijas darbs
%% Merijumu datu apstrade
%% Merki:
% * Iemacities apstradat merijumu datus
% * Iemacities lietot polyfit, polyval funkcijas
% * Iemacities veidot matlab atskaites izmantojot "publish"
%% Darba programma:
%
% A = imread('polyfit_grafiks.png'); //ievieto attelu matlabaa
%
% figure(1),image(A) //atver attelu
%
% figure(1),image([0 100],[0 10],A) //noregule x y asu vertibas
%
% set(gca,'YDir','normal') //noregule attela orientaciju
%
% [x,y] = ginput(20) //ar so nolasa punktus no grafika
%
% p = polyfit(x,y,4);
%
% y = polyval(p,x);
%
% plot(x,y,'-o')
%
% grid
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
% "polyval". Iemacijos ari to, ka "publish" pdf dokumetns neatbalsta
% garumzies.
% Iemacijos ievietot attelus "publish pdf" un noformet laboratorijas darbu
% atbilstosi prasibam