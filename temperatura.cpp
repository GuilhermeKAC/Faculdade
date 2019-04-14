//Algoritmo Temperatura

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
float C,F;
char opcao;

printf("Digite dois numeros diferentes");
printf("(F)Fahrenheit e (C) Celsius: ");
scanf("%c", &opcao);
         if (opcao == 'C'){
            printf("Entre com a temperatura em Celsius: ");
            scanf("%f", &C);
            F=(9*C+160)/5;
            printf("A temperatura em Fahrenheid e´: %f\n",F);
            printf("%.2f C = %.2f F\n", C, F);
         }else if (opcao == 'F'){
               printf("Entre com a temperatura em Fahr: ");
               scanf("%f", &F);
               C=(F-32)*5/9;
               printf("A temperatura em Celsius e´: %f\n",C);
               printf("%.2f F = %.2f \n",F, C);
         }else if ("opção invalida"){
         }
         getch();
}
                  
              


