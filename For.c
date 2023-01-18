#include<stdio.h>
#include<stdlib.h>

/*pseudocódigo que permita entrar com o nome e o salário bruto de 10 pessoas.
Após ler os dados, imprimir o nome e o valor da alíquota do imposto de renda
calculado conforme a tabela a seguir:
Salário IRRF Salário menor que R$1300,00  Isento 
Salário maior ou igual a R$1300,00 e menor que R$2300,00  10% do salário bruto 
Salário maior ou igual a R$2300,00 15% do salário bruto*/

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
			printf("|Alíquota Do Imposto de Renda:ISENTO\n");
			printf("|Salario Final:R$%.2f\n",salario_bruto);
			printf("----------------------------------------------\n");
		}else
		if(salario_bruto>=1300 && salario_bruto<2300){
			printf("\n--------------Folha-Salarial----------------\n");
			printf("|Nome Do Empregado:%s\n",nome);
			printf("|Salario Bruto:R$%.2f\n", salario_bruto);
			printf("|Alíquota Do Imposto de Renda:R$%.2f\n",salario_bruto*0.1);
			printf("|Salario Final:R$%.2f\n",salario_bruto-(salario_bruto*0.1));
			printf("----------------------------------------------\n");
		}else{
			printf("\n--------------Folha-Salarial-------------\n");
			printf("|Nome Do Empregado:%s\n",nome);
			printf("|Salario Bruto:R$%.2f\n", salario_bruto);
			printf("|Alíquota Do Imposto De Renda:R$%.2f\n",salario_bruto*0.15);
			printf("|Salario Final:R$%.2f\n",salario_bruto-(salario_bruto*0.15));
			printf("-------------------------------------------\n");
		}
		}
}
