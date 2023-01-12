#include <stdio.h>
#include <stdlib.h>

//algoritmo que ler três números inteiros e imprime os três em ordem crescente.

 main(){
// 	Declaração de variáveis
 	int num1, num2, num3;
 	
// 	Entrada de Dados
	printf("Informe tres numeros inteiros:");
	scanf("%d %d %d", &num1, &num2, &num3);
	
//	Processamento&Saída de dados
	if(num1<num2 && num1<num3){
		if(num2<num3)
			printf("%d %d %d", num1, num2, num3);
		else
			printf("%d %d %d", num1, num3, num2);
	}
	if(num2<num1 && num2<num3){
		if(num3<num1)
			printf("%d %d %d", num2, num3, num1);
		else
			printf("%d %d %d", num2, num1, num3);
	}
	if(num3<num1 && num3<num2){
		if(num2<num1)
			printf("%d %d %d", num3, num2, num1);
		else
			printf("%d %d %d", num3, num1, num2);
	}
}
