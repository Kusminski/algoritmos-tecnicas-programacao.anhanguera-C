#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int main()
{
	int i;
	int inicio, fim;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um n�mero inicial:");
	scanf("%d", &inicio);
	
	printf("Digite um n�mero final:");
	scanf("%d", &fim);	
	
	for (i=inicio;i<=fim;i++)
	{
		if ((i % 2) == 0)
			printf("N�mero %d par !!!\n", i);
		else
			printf("N�mero %d impar !!!\n", i);
	}
}
