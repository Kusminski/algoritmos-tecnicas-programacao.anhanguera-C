#include <stdio.h>
#include <locale.h>

int main()
{
	int numero;

	setlocale(LC_ALL, "Portuguese");

	printf("Digite um n�mero entre 0 e 10: ");
	scanf("%d", &numero);
	
	if (numero >=0 && numero <= 10)
	{
		printf("N�mero v�lido !!!\n");
		printf("N�mero digitado: %d\n", numero);
	}
	else
		printf("N�mero inv�lido !!!\n");
	
	printf("Bye !!!\n");
	getch();
}
