#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome[255] = "Jo�o";
	int i;
	
	printf("%s", nome);	
	
	
	
}
