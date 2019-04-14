//Conversão de velocidade de km/h para m/s e m/s para km/h

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){

float Var,Ve,Vs;
int	  opcao;

   printf("Escolha (1) Km/h para m/s (2) m/s para km/h: ");
   scanf("%c",&opcao);
   printf("Entre com o valor da velocidade: ");
   scanf("%f",&Ve);
         if(opcao=='1'){
                      Vs=Ve/3,6;
	                  printf("A velocidade em m/s é: %.2f", Vs);}
	                  else if (opcao=='2'){
                           Vs=Ve*3,6;
                           printf("A velocidade em km/h é: %.2f",Vs);}
                           else{
                                printf("opção invalida");}
                                getch(); 
                                                 
}
