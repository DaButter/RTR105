set grid
plot [0:2*pi] sin(x)
replot [0:2*pi] cos(x)
replot "derivative.dat" using 1:2
replot "derivative.dat" using 1:3
