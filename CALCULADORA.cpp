#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
int a,b;
float c;
char operacao;

printf("Digite a opera��o (-)subtracao (+)soma (*)Multiplicacao (/)divis�o"); 
printf("(^)potenciacao e (%)sobra");
scanf("%c", &operacao);
printf("\n Digite o primeiro n�mero");	
scanf("%d", &a);
printf("\n Digite o segundo n�mero");	
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
	printf("/n o valor de C e�: invalido");
}
system ("pause");
		
}

