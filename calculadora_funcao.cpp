//Faça um programa utilizando o conceito de funções antes do programa principal para realizar as 4 operações matemáticas. 
//Utilize a estrutura SWITCH...CASE para a escolha da opção

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

	int main(void){
		
		char opcao;
		float operacao, x, y;
		float numero_soma(float a, float b);
		float numero_subtracao(float a, float b);
		float numero_divisao(float a, float b);
		float numero_multiplicacao(float a, float b);
		
		printf("\n|-----------------------|\n");
		printf("\n|\tCALCULADORA\t|\n");
		printf("\n|-----------------------|\n");
		printf("Escolha o tipo de operacao\n");
		printf("\t(+)");
		printf("\t(-)\n");
		printf("\t(/)");
		printf("\t(*)\n");
		printf("opcao: ");
		scanf("%c", &opcao);
		printf("Defina o primeiro valor: ");
		scanf("%f", &x);
		printf("Define o segundo valor: ");
		scanf("%f", &y);
		
		switch(opcao){
			case ('+'):
				operacao = numero_soma(x,y);
				printf("A soma de %.2f + %.2f = %.2f",x,y,operacao);
				break;
			case ('-'):
				operacao = numero_subtracao(x,y);
				printf("A subtracao de %.2f - %.2f = %.2f",x,y,operacao);
				break;
			case ('/'):
				operacao = numero_divisao(x,y);
				printf("A divisao de %.2f / %.2f = %.2f",x,y,operacao);
				break;
			case ('*'):
				operacao = numero_multiplicacao(x,y);
				printf("A multiplicacao de %.2f * %.2f = %.2f",x,y,operacao);
				break;
			default:
				printf("operacao invalida");
		}		
		return(0);
}

	float numero_soma(float a, float b){
		float soma;
		soma = a + b;
		return(soma);
}
	float numero_subtracao(float a, float b){
		float subtracao;
		subtracao = a - b;
		return(subtracao);
	}
	float numero_divisao(float a, float b){
		float divisao;
		divisao = a / b;
		return(divisao);
	}
	float numero_multiplicacao(float a, float b){
		float multiplicacao;
		multiplicacao = a * b;
		return(multiplicacao);
	}
