#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double salario;
	
	printf("SAL�RIO REAJUSTE\n");
	printf("Digite o sal�rio atual:");
	scanf("%lf", &salario);

	printf("Reajuste: %.2f\n", salario * 1.10);
}
