#include <stdio.h>
#include <stdlib.h>

//.Pseudoc�digo que imprima todos os n�meros pares de 1 at� 100.
int main(){
		int i = 1;
		while(i<=100){
			if(i % 2 == 0){
				printf("%2d\t", i);
			}
		i++;
	}
} 
