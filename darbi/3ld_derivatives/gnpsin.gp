set grid
plot [0:2*pi] sin(sqrt(x))*sin(sqrt(x))
replot "sin_data.dat" using 1:2
