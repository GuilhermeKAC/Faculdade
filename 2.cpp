#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	float volume, aresta;
	float volume_cubo(float);
	
	printf("Digite o valor da aresta de um cubo: ");
	scanf("%f", &aresta);
	
	volume = volume_cubo(aresta);
	
	printf("O Valor do Volume = %.2f",volume);
	
	return(0);
}

float volume_cubo(float aresta){
	float vol;
	vol = pow(aresta,3);
	return(vol);
}
