#include <stdio.h>
#include <stdlib.h>

//2.Escreva um pseudoc�digo que imprima a tabuada de um  n�mero informado pelo usu�rio
int main(){
	int num, i=1;
	
	printf("Qual Numero que deseja para a tabuada:");
	scanf("%d", &num);
	
	 while(i<=10){
	 	printf("%d x %d = %2d\n", num, i, num*i);
	 	i++;
	 }
}
	
