#include <stdio.h>
#include <math.h>

int main(){
 float a=0.01, b=1.5*M_PI, x, delta_x=1.e-5, funkca, funkcb, funkcx;
 int i=0;

 funkca= sin(a); funkcb = sin(b);

 if(funkca*funkcb>0){
  printf("Intervālā [%.2f;%.2f] sakņu nav vai tajā ir pāra sakņu skaits\n",a,b);

  return 1;
 }

  printf("sin(%7.3f)=%7.3f\t\t\t\tsin(%7.3f)=%7.3f\n",a,sin(a),b, sin(b));

 while((b-a)>delta_x) 
 {
         x= (a+b)/2.;

         if(funkca*sin(x)>0)
                 a =x;
  else
        b=x;
        i++;
        printf("sin(%7.3f)=%7.3f\tsin(%7.3f)=%7.3f\tsin(%7.3f)=%7.3f\n",a,sin(a),x,sin(x),b, sin(b));
}

 printf("sakne atrodas pie x=%.3f, jo...  %d.reizes nācās atkārtot darbī lai atrastu intervālu\n",x,i);

 return 0;
}

