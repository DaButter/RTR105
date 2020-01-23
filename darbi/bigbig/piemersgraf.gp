f(x) = sin(x)

xl=0; xh=20; yl=-1; yh=1;
set xrange [xl:xh]
set yrange [yl:yh]

set multiplot

plot f(x) not w l lt 3 lw 12

## overdraw borders on left, right, top, bottom
set object 1 rectangle from screen 0, screen 0 to graph 0, screen 1 behind \
  fillstyle solid noborder
set object 2 rectangle from graph 1, screen 0 to screen 1, screen 1 behind \
  fillstyle solid noborder
set object 3 rectangle from screen 0, graph 1 to screen 1, screen 1 behind \
  fillstyle solid noborder
set object 4 rectangle from screen 0, screen 0 to screen 1, graph 0 behind \
  fillstyle solid noborder

plot NaN not

unset multiplot
