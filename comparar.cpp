//Compara��o entre dois n�meros

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){

float A, B;

   printf ("Algoritmo para comparar dois n�meros\n");
   printf ("Digite o primeiro n�mero: ");
   scanf ("%f",&A);
   printf ("Digite o segundo n�mero: ");
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
