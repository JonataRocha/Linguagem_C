#include<stdio.h>
#include<stdlib.h>

//Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor da compra for menor que R$20,00,caso
//contrário, o lucro será de 30%. Faça um algoritmo que leia o valor do produto e imprima o valor da venda.

main(){
	float valor_total, produto;
	
	printf("Informe o valor do produto:");
	scanf("%f", &produto);
	
	if(produto<20){
		valor_total = produto+(produto*45/100);
	}else{
		valor_total = produto+(produto*30/100);	
	}
	printf("Total a ser pago:%.2f", valor_total);
}
