#include<stdio.h>

/*Faça um pseudocódigo que permita entrar com o nome, a idade e o sexo de 20 pessoas. O programa deve imprimir o nome
da pessoa se ela for do sexo masculino e tiver mais de 21 anos.*/

main(){
//	Declaração de Variáveis
	int idade, i=1;
	char sexo;
	char nome[50];
//	input
	while(i<=20){
		printf("\n\nInforme o nome da %dº Pessoa:", i);
		scanf("%s", &nome);
		printf("Ola %s, Informe Sua Idade:", nome);
		scanf("%d", &idade);
		printf("%s, Informe o seu Sexo tambem M/F:", nome);
		scanf(" %c", &sexo);
//	output
		if((sexo == 'M' || sexo == 'm') && idade > 21){
			printf("==================================================");
			printf("\nvoce eh homen e tem mais de 21 anos de idade\n");
			printf("==================================================");
		}
		i++;
	}
}
