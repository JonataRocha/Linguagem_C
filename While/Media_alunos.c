#include<stdio.h>

/*Em uma turma há 10 alunos. Cada aluno tem 2 notas. Um professor precisa calcular a média das duas notas de cada aluno.
programa que resolve este problema.Qual a média geral da turma*/

main(){
	float nota_1, nota_2, media_aluno, media_geral;
	char nome_aluno [50];
	int i=1;
	while(i <= 3){
		printf("Informe o nome do %do Aluno:", i);
		scanf("%s", &nome_aluno);
		
		printf("Informe a Primeira Nota:");
		scanf("%f", &nota_1);
		
		printf("Informe a Segunda Nota:");
		scanf("%f", &nota_2);
		
		media_aluno = (nota_1 + nota_2)/2;
		media_geral += media_aluno/3;
		
		printf("-------media do Aluno--------\n");
		printf("A media do %s eh de %.1f\n",nome_aluno, media_aluno);
		printf("-----------------------------\n\n");
		i++;
	}
	printf("\n--------Media de Todos Aluno-------");
	printf("\nMedia de todos alunos eh:%.1f", media_geral);
}
