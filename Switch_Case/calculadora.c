#include <stdio.h>
#include <stdlib.h>

//Fa�a um algoritmo que pe�a dois n�meros ao usu�rio e a opera��o a ser realizada(+,-,* e /).

main(){
	int num1,num2;
	char operador;
	
	printf("==========#Calculadora#==========\n");
	printf("Informe Um Numero:");
	scanf("%d", &num1);
	
	printf("Qual Operacao deseja realizar(+,-,x,/):");
	scanf(" %c", &operador);
	
	printf("\nInforme o segundo numero:");
	scanf("%d", &num2);
	
	switch(operador){
		case '+':
			printf("%d + %d = %d", num1, num2, num1+num2);
		break;
		case '-':
			printf("%d - %d = %d", num1, num2, num1-num2);
		break;
		case 'x':
			printf("%d x %d = %d", num1, num2, num1*num2);
		break;
		case '/':
			printf("%.1d / %.1d = %.1f", num1, num2, (float)num1/num2);
		break;
		default:
			printf("Operacao invalida");
		break;
	}
}
