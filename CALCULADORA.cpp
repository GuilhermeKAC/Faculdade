#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
int a,b;
float c;
char operacao;

printf("Digite a operação (-)subtracao (+)soma (*)Multiplicacao (/)divisão"); 
printf("(^)potenciacao e (%)sobra");
scanf("%c", &operacao);
printf("\n Digite o primeiro número");	
scanf("%d", &a);
printf("\n Digite o segundo número");	
scanf("%d", &b);

if (operacao== + ){
	c=a+b;
}else if (operacao=="-"){
	c=a-b;
}else if (operacao=="*"){
	c=a*b;
}else if (operacao=="/"){
	c=a/b;
}else if (operacao=="^"){
	c=pow(a,b);
}else if (operacao=="%"){
	c=a%b;
}else{
	printf("/n o valor de C e´: invalido");
}
system ("pause");
		
}

