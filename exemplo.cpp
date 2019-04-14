#include <stdio.h>
#include <stdlib.h>


int main(){
	int matriz[6];
	int i;
	
	for (i=0;i<5;i++){
		printf("Digite o %io Valor: ",i+1);
		scanf("%i", &matriz);
	}
	for (i=0;i<5;i++){
		printf("i[%i] = %d\n",i,matriz[i]);
	}
	system("pause");
}
