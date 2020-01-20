f(x)=sin(sqrt(x))*sin(sqrt(x))
delta = 0.2
integral_f(x)=(x>0)?integral1a(x):-integral1b(x)
integral1a(x)=(x<=0)?0:(integral1a(x-delta)+delta*f(x))
integral1b(x)=(x>=0)?0:(integral1b(x+delta)+delta*f(x))

integral2_f(x,y)=(xy)?0:(integral2(x+delta,y)+delta*f(x))

set autoscale
set samples 50
plot[-1:6] f(x) title "f(x)=sin(sqrt(x))^2", 2/sqrt(pi)*integral_f(x) title "integral graph"
