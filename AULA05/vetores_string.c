#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome[255] = "Jo�o";
	char cidade[255];
	
	printf("Ol� %s !!! Qual a sua cidade de nascimento? ", nome);
	scanf("%255[^\n]", cidade);
	
	printf("%s voc� nasceu em %s", nome, cidade);	
}
