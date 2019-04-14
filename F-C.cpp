//algoritmo "Temperatura"

#include<stdio.h>
#include<conio.h>

int main(){
float C, F;
char  opcao;

	printf("Entre com a opcao");
	printf("(F) Fahrenheit e (C) Celsius: ");
	scanf ("%c", &opcao);
	if (opcao == 'C'){
		printf("Entre com a temperatura em Celsius: ");
		scanf("%f", &C);
		F=(9 * C + 160)/5;
		printf("A temperatura em Fahrenheid é: %f\n", F);
		printf("%.2f C = %.2f F",C,F);	
	}
	else if (opcao == 'F'){
  		printf("Entre com a temperatura em Fahr: ");
		scanf("%f", &C);
		C=(F-32)*5/9;
		printf("A temperatura em Celsius é: %f\n",C);
		printf("%.2f F = %.2f C\n",F,C);
	}
	else{
		printf("opçao inválida");	
	}
	getch();	                    
}
    

