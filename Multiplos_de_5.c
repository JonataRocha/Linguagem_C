#include<stdio.h>

//1.Pseudocódigo que imprime os múltiplos de 5, no intervalo de 1 até 500;

main(){
	int i;
	
	for(i=1; i<=500; i++){
		if(i % 5 == 0){
			printf("%3d  ", i);
		}

	}
}
