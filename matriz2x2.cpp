//3- Fazer um programa para uma matriz 2x2 com os valores sendo digitados pelo usuário: 

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int Matriz_[2][2];
	int Linha, Coluna;
	
	printf("\tMatriz 2X2\n");
	
	for(Linha = 0; Linha < 2; Linha++){
		for(Coluna = 0; Coluna < 2; Coluna++){
			printf("Digite o Valor [%d][%d]: ",Linha, Coluna);
			scanf("%d", &Matriz_[Linha][Coluna]);
		}
	}
		printf("Matrix [2][2]\n");

	for(Linha = 0; Linha < 2; Linha++){
		for(Coluna = 0; Coluna < 2; Coluna++){
			printf("%d\t", Matriz_[Linha][Coluna]);
		}
		printf("\n");	
	}

	system("PAUSE");
}	
