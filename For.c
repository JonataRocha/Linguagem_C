#include<stdio.h>
#include<stdlib.h>

/*pseudoc�digo que permita entrar com o nome e o sal�rio bruto de 10 pessoas.
Ap�s ler os dados, imprimir o nome e o valor da al�quota do imposto de renda
calculado conforme a tabela a seguir:
Sal�rio IRRF Sal�rio menor que R$1300,00  Isento 
Sal�rio maior ou igual a R$1300,00 e menor que R$2300,00  10% do sal�rio bruto 
Sal�rio maior ou igual a R$2300,00 15% do sal�rio bruto*/

main(){
	int contador;
	float salario_bruto;
	char nome[50];
	
	for(contador=1; contador<=10; contador++){
		printf("Qual o Nome do trabalhador:");
		scanf("%s", &nome);
		
		printf("%s, informe seu salario Bruto:", nome);
		scanf("%f", &salario_bruto);
		
		if(salario_bruto<1300){
			printf("\n--------------Folha-Salarial----------------\n");
			printf("|Nome Do Empregado:%s\n",nome);
			printf("|Salario Bruto:R$%.2f\n", salario_bruto);
			printf("|Al�quota Do Imposto de Renda:ISENTO\n");
			printf("|Salario Final:R$%.2f\n",salario_bruto);
			printf("----------------------------------------------\n");
		}else
		if(salario_bruto>=1300 && salario_bruto<2300){
			printf("\n--------------Folha-Salarial----------------\n");
			printf("|Nome Do Empregado:%s\n",nome);
			printf("|Salario Bruto:R$%.2f\n", salario_bruto);
			printf("|Al�quota Do Imposto de Renda:R$%.2f\n",salario_bruto*0.1);
			printf("|Salario Final:R$%.2f\n",salario_bruto-(salario_bruto*0.1));
			printf("----------------------------------------------\n");
		}else{
			printf("\n--------------Folha-Salarial-------------\n");
			printf("|Nome Do Empregado:%s\n",nome);
			printf("|Salario Bruto:R$%.2f\n", salario_bruto);
			printf("|Al�quota Do Imposto De Renda:R$%.2f\n",salario_bruto*0.15);
			printf("|Salario Final:R$%.2f\n",salario_bruto-(salario_bruto*0.15));
			printf("-------------------------------------------\n");
		}
		}
}
