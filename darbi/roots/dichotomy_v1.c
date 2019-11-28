#include<stdio.h>
#include<math.h>

int main(){
 float a = 0., b = M_PI, x, delta_x=1,e-5 /*0.00001*/, funkca, funkcb, funkcx;
 //int ..
 funkca = sin(a);
 funkcb = sin(b);

 if(funkca*funkcb>0){
   printf("Intervālā [%.2f;%.2f] sin(x) funkcijai",a,b);
   printf("sakņu nav (vai arī tajā ir pāra sakņu skaits)\n");

   return 1;
 }
 //fabs - modulis
 while(fabs(b-a)>delta_x) {
	x = (a+b)/2.;
	if (funkca*sin(x)>0) a=x;
	else b=x;
 printf("sin(%7.3f)=%7.3f\tsin(%7.3f)=%7.3f\tsin(%7.3f)=%7.3f",a,sin(a),x, sin(x), b, sin(b));

 return 0;
 }


}
