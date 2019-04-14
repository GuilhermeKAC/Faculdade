//Fazer um programa para uma matriz 3x3 com os valores\ sendo digitados pelo usuário:

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int Matriz_[3][3];
	int Linha, Coluna;
	
	printf("\tMatriz [3][3]\n");
	
	for (Linha =0; Linha < 3; Linha++){
		for (Coluna = 0; Coluna < 3; Coluna++){
			printf("Digite o Valor [%d][%d]: ",Linha, Coluna);
			scanf("%d", &Matriz_[Linha][Coluna]);
		}
	}
		printf("\t MATRIZ [3][3]\n");
	for (Linha =0; Linha < 3; Linha++){
		for (Coluna = 0; Coluna < 3; Coluna++){
			printf("%d\t", Matriz_[Linha][Coluna]);
		}
		printf("\n");
	}
	system("PAUSE");
}



