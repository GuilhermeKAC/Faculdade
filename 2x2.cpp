#include<stdio.h>
#include<stdlib.h>
//define NUMERO_DE_LINHAS 2
//define NUMERO_DE_COLUNAS 2

int main(void) {
    int linha, coluna;
    int matriz[2][2];
    
    for(linha = 0; linha < 2; linha++) {
        for(coluna = 0; coluna < 2; coluna++) {
            printf("Entre com o valor [%d][%d] da matriz: ", linha, coluna);
            scanf(" %d", &matriz[linha][coluna]);
        }
    }
    
    printf("\nA matriz ficou assim:\n\n");
    
    for(linha = 0; linha < 2; linha++) {
        for(coluna = 0; coluna < 2; coluna++) {
            printf("%4d", matriz[linha][coluna]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
