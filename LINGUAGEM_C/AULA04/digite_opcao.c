#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int opcao_menu;
	printf("Digite uma op��o\n");
	printf("1 - Incluir aluno\n");
	printf("2 - Listar aluno\n");
	printf("3 - Sair\n");
	
	scanf("%d", &opcao_menu);
	
	switch (opcao_menu)
	{
		case 1:
		{
			printf("Op��o de incluir aluno selecionado");
			break;
		}
		case 2:
		{
			printf("Op��o de listar aluno selecionado");
			break;
		}
		case 3:
		{
			printf("Saindo !!!");
			break;
		}
		default:
		{
			printf("Op��o inv�lida !!!");
			break;
		}
	}
	
}
