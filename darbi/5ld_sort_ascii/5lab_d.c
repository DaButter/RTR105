#include<stdio.h>
#include<string.h>

int main(){
 //vieta mainīgajiem
 char in_st[200];
 int i, j, k, tmp, lenght, m_v=200, l_v=0, vid_v, medi, vertiba, kop_s=0;
 int max=0;

 //dod iespēju lietotājam ievadīt simbolu rindu
 printf("\n\n________________________________________________________________\n");
 printf(" Lūdzu ievadiet simbolu rindu, kas nepārsniedz 200 rakstzīmes:\n\t");
 scanf("%[^\n]", in_st);
 printf("________________________________________________________________\n");

 //Ievadītās rindas garuma noskaidrošana
 lenght=strlen(in_st);
 printf("|\tIevadītās rindas garums ir %d simboli\t\t\t|\n", lenght);

 //Kārtošanas algoritms
 for (j=0;j<lenght;j++){
  for (i=0;i<lenght-1;i++){
   if (in_st[i]>in_st[i+1]){
    tmp =in_st[i+1];
    in_st[i+1] = in_st[i];
    in_st[i]= tmp;
   }
  }
 }

 //videjas vērtības noskaidrošana,
 for(i=0;lenght>i;i++){
 vertiba = (int)in_st[i];
 if (l_v<vertiba) l_v=vertiba;
 if (m_v>vertiba && vertiba>32) m_v = vertiba;
 kop_s=kop_s+vertiba;
 }

 //Mazākās vērtības izdruka
 printf("________________________________________________________________\n");
 printf("|\tMazākā vērtība pēc ASCII tabulas ir %d  \t\t|\n", m_v);

 //Lielākās vērtības izdruka
 printf("________________________________________________________________\n");
 printf("|\tLielākā vērtība pēc ASCII tabulas ir %d  \t\t|\n", l_v);

 //vidējās vērības izdruka
 printf("________________________________________________________________\n");
 vid_v=kop_s/lenght;
 printf("|\tVidējā vērtība ASCII sistēmā ir %d\t\t\t|\n",vid_v);

 //medianas izdruka
 printf("________________________________________________________________\n");
 printf("|\tIevadītas rindas mediana pēc ASCII sistēmas ir %d \t|\n", in_st[lenght/2]);
 printf("________________________________________________________________\n");

 //modas apreiķins un izdruka
j=0;
 for(i=0;lenght>i;i++){
  if(in_st[i]==in_st[i+1]){
   j++;
  }
  else if (in_st[i] != in_st[i+1]){
   if(j>max) max=j;
   j=0;
  }
 }
j=0;
 for(i=0;lenght>i;i++){
  if(in_st[i]==in_st[i+1]){
  j++;
  }
  else if(in_st[i] != in_st[i+1]){
   if (max==j){
    printf("|\tIvadītās rindas moda ir %d \t\t\t\t|\n", in_st[i]);
    printf("________________________________________________________________\n");
    }
  j=0;
  }
 }

 //alfabētiskas secības izdruka
 for(i=0;lenght>i;i++){
 printf("|\tGarums %d \t %c \t %d\t\t\t\t|\n", i, in_st[i], in_st[i] );
 }

 //programmas nobeigums
 printf("________________________________________________________________\n");
 printf(" \n\n");
 return 0;
}



