#include <stdio.h>
#include <stdlib.h>

//.Pseudocódigo que imprima todos os números pares de 1 até 100.
int main(){
		int i = 1;
		while(i<=100){
			if(i % 2 == 0){
				printf("%2d\t", i);
			}
		i++;
	}
} 
