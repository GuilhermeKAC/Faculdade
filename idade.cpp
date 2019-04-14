//Verificação de maioridade

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    int idade;
    char nome[15];
         
         printf("Algoritmo para verificar maioridade \n");
         printf("Entre com o nome: ");
         gets(nome);
         printf("Entre com a idade: ");
         scanf("%d", &idade);
         if (idade>=18){
            printf("Maior de idade: %s %d ",nome, idade);
         }else {
               printf("Menor de idade: %s %d ",nome, idade);
               }
               getch();        
    
    
}
