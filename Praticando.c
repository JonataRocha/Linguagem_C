#include<stdio.h>
#include<stdlib.h>

/*Pseudocódigo que permita entrar com a idade de várias pessoas e imprima: 
• total de pessoas com menos de 21 anos 
• total de pessoas com mais de 50 anos*/

main(){
	int contador, idade, quantidade_consulta, pessoas_21=0, pessoas_50=0;
	
	printf("Informe a quantidade de pessoa a serem consultada:");
	scanf("%d", &quantidade_consulta);
	
	for(contador=1; contador<=quantidade_consulta; contador++){
		printf("Informe A Idade da %dpessoa:",contador);
		scanf("%d", &idade);
		if(idade<21)
			pessoas_21+=1;
		else
		if(idade>50)
			pessoas_50+=1;
	}
	printf("Quantidade de pessoas com menos de 21: %d\n",pessoas_21);
	printf("Quantidade de pessoas com mais de 50: %d", pessoas_50);
}
