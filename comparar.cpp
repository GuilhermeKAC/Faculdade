//Comparação entre dois números

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){

float A, B;

   printf ("Algoritmo para comparar dois números\n");
   printf ("Digite o primeiro número: ");
   scanf ("%f",&A);
   printf ("Digite o segundo número: ");
   scanf ("%f",&B);
   if (A>B){
			printf ("%.2f > %.2f",A,B);}
       else{
            if (A<B){
                     printf("%.2f < %.2f",A,B);}
                else{
                     printf("%.2f = %.2f",A,B);}}
                    getch();       
}
