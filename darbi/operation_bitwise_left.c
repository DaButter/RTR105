#include<stdio.h>

void main()
{

	int a=10; /*atmiņā parādīsies mainīgais a
	 izmērs 4 byte, saturs 0000 0000 0000 0000 0000 0000 0000  1010*/
	printf("Operācija <<: %d<<1 rezultāts %d \n", a, a<<1); //sagaidam skaitli 20
	
	int b; /*atmiņā parādīsies mainīgais b
 (izmērs 4 byte, saturs ???? ???? ???? ???? ???? ???? ???? ????)*/
	printf("B mainīgais \"sākuma\" stāvoklis (uzreiz pēc deklarēšanas): %d \n " ,b);
	
	b=a<<2; //šeit ir divas operācijas:  =(piešķiršana) un <<(bīdīšana pa bitiem pa kreisi)
	printf("Operācija <<: %d<<%d rezultāts %d \n" ,a,1,b); //sagaidam skaitli 40

	int c;
	printf("Papētīsim << operāciju\n---------------------------\n");
	printf("Cienījamais lietotāj! Lūdzu ievadiet operācijas 1. operandu: ");
	scanf("%d",&a);
	printf("Cienījamais lietotāj! Lūdzu ievadiet operācijas 2. operandu: ");
	scanf("%d",&c);
	b=a<<c;
	printf("----------------------------------\nSkaties, kas ir sanācis: %d\n",b);

//mājās pamēģināt šo ar char tipu, analizēt rezultāta zīmes

/* //skolotajas skaidrojums:
 char a=10;// atmiņā parādīsies mainīgais a (izmērs 1 byte, saturs 000>
 printf("Operācija <<: %d<<1 rezultāts %d\n",a,a<<1);// sagaidam skait>

 char b;// atmiņā parādīsies mainīgais b (izmērs 1 byte, saturs ???? ?>
 printf("b mainīgā \"sākuma\" stāvoklis (uzreiz pēc deklarēšanas): %d\>

 b=a<<2;// šeit ir divas operācijas - =(piešķiršana) un <<(bīdīšana pa>
 printf("Operācija <<: %d<<%d rezultāts %d\n",a,2,b);// sagaidam skait>

 char c;
 printf("Papētīsim << operāciju\n-------------------------\n");
 printf("Cienījamais lietotāj, lūdzu, ievadi operācijas 1. operandu: ">
 scanf("%d",&a);
 printf("Cienījamais lietotāj, lūdzu, ievadi operācijas 2. operandu: ">
 scanf("%d",&c);
 b=a<<c;
 printf("-------------------------\nSkaties, kas ir sanācis: %d\n",b);
*/ 


}

