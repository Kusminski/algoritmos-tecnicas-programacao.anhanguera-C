#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome[255] = "Jo�o";
	char cidade[255];
	
	printf("Ol� %s !!! Qual a sua cidade de nascimento? ", nome);
	fgets(cidade, sizeof(cidade), stdin);
	
	printf("%s voc� nasceu em %s", nome, cidade);	
}
