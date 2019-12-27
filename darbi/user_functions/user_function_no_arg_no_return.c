#include<stdio.h>

void user_function_1()
 {
 printf("Cienījamais lietotāj, sveicu Tevi no 1. savas lietotāja funkcijas!\n");
 } //apraksta void user_funkction_1 funkciju, sis pats par sevi neko neizdod

void user_function_2(); //funckijas deklaresana. deklare pirms main(), pec main() funkciju apraksta

void main() //main izdod to, ko taja ievieto, taja ir return
 {
 user_function_1(); //izauc pirmo voidu, izpilda tik reizes, cik noradits sajā void main().
 user_function_1(); // izdod 1.voidā norādīto funkciju
 user_function_1(); //izpilda 3 to reizes, jo 3 reizes piesaukts
 user_function_2(); //izsauc 2.funckiju, izpilda to seit
 }

void user_function_2()
 {
 printf("Cienījamais lietotāj, sveicu Tevi no 2. savas lietotāja funkcijas!\n");
 user_function_1(); //izsauc 1.funkciju 2.funkcijā
 }  //sis aprkasta 2.funckiju
