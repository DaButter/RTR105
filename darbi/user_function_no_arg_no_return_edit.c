#include<stdio.h>

void user_function_1();

void user_function_2();

void main()
 {
 user_function_1(); //izauc pirmo voidu, izpilda tik reizes, cik noradits sajā void main().
 user_function_1(); // izdod 1.voidā norādīto funkciju
 user_function_1();
 user_function_2();
 }

void user_function_2()
 {
 printf("Cienījamais lietotāj, sveicu Tevi no 2. savas lietotāja funkcijas!\n");
 user_function_1(); 
 }
void user_function_1()
 {
 printf("Sagāja 1.funkcija!\n");
 }
