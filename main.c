#include <stdio.h>
#include <stdlib.h>

//algoritmo que leia tr�s n�meros inteiros e imprime os tr�s em ordem crescente.

 main(){
 	int num1, num2, num3;
 	
	printf("Informe tres numeros inteiros:");
	scanf("%d %d %d", &num1, &num2, &num3);
	
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
