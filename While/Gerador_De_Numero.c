#include<stdio.h>
#include<stdlib.h>

//algoritmo que gera e escreve os n�meros  �mpares entre 100 e 200;
main(){
	int i=100;
	
	while(i <= 200){
		if(i % 2 == 1){
			printf("%d\n", i);
		}
		i++;
	}
}
