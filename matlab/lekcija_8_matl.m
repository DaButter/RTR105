function [y,t]=lekcija_8_matl(f)
if nargin==0
    f=2; %ka nokluseta frekvence
end %tagad var ari palaist neievadot inputa f argumentu

% sis ir funkcijas piemers
% kas atgriez y ka output argument
% to var palaist no komandloga
% nosaukums(f argumenta vertiba)
% fails zime sinusoidu
% tas ir tirraksts
% 18.03.2020
% abcd

t = 0:0.01:1;
A0=0; A=1; %f=9;
y = A0+A*sin(2*pi*f*t);
if nargout==0
    plot(t,y)
end

% sagalabasana ar nosaukumu
% lekcija_8_matl.m
% 1. noteikti nosaukuma beigas jabut paplasinajumam .m
% 2. nevajafzetu likt spaces nosaukuma
% ja grib ielikt space, tad ta vieta jaliek underscore
% _
% abc123_
% 3. faila nosaukumam ir jasakas ar burtu
% 4. nelikt papildus punktus nosaukuma
