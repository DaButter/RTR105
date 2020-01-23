set grid

plot [-1:1] (x<0?exp(-x):exp(x)) with filledcurves
