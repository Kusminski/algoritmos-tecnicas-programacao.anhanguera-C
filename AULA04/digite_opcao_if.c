#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int opcao_menu;
	printf("Digite uma op��o\n");
	printf("1 - Incluir aluno\n");
	printf("2 - Listar aluno\n");
	printf("3 - Sair\n");
	
	scanf("%d", &opcao_menu);
	
	if (opcao_menu == 1)
		printf("Op��o de incluir aluno selecionado");
	else if (opcao_menu == 2)			
		printf("Op��o de listar aluno selecionado");
	else if (opcao_menu == 3)			
		printf("Saindo !!!");
	else
		printf("Op��o inv�lida !!!");
}
