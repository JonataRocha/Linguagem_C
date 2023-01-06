#include <stdio.h>
#include <stdlib.h>

 /*programa que ler percurso em quilómetros, o tipo do carro e informe o consumo estimado de combustível, sabendo-se
 que um carro tipo A faz 12 km com um litro de gasolina, um tipo B faz 9 km e o tipo C, 8 km por litro.*/
 
  main(){
  	
  	int km;
  	char tipo_car;
  	float consumo;
  	
//  	entrada de dados

  	printf("Informe Seu Percurso em [Km]:");
  	scanf("%d", &km);
  	
  	printf("\nQual Tipo do seu carro representado em letras (A),(B),(C):");
  	scanf(" %c", &tipo_car);
  	
//  	Processamento de dados

  	switch (tipo_car){
  		case 'a':
  		case 'A':
			consumo = (float)km/12;
  		break;
  		
  		case 'b':
  		case 'B':
			consumo = (float) km/9;
  		break;
  		
  		case 'c':
  		case 'C':
  			consumo = (float) km/8;
  		break;
  		
  		default:
  			printf("Tipo de carro invalido");
  		break;
		}
		
//		Saída de dados
	printf("\nSeu carro rodou:%dkm, e consumiu:%.2f Litros de gasolina", km, consumo);
  }
