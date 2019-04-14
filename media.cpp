//Media Alunos

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
    float media, NP1, NP2;
    char opcao, nome[15];
    printf("Entre com o nome do Aluno: ");
    gets(nome);
    printf("Entre com a Primeira Nota: ");
    scanf("%f", &NP1);
    printf("Entre com a Segunda Nota: ");
    scanf("%f", &NP2);     
    media=(NP1+NP2)/2;
    printf("A sua média é: %f", media);
    
    if (media>=7.0){
       printf("O Aluno %s esta aprovado com media %.2f ", nome, media);}
       else{ 
          if ((media >= 5) && (media<7)){
          printf("O Aluno %s com media %.2f fara exame ", nome, media);}
                    else{
                    printf(" O Aluno %s com média %.2f esta reprovado", nome, media);}}
                    
                    getch();
                
                     
}
