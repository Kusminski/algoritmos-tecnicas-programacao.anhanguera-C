#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double x, y;
	double resultado;
	
	printf("SOMAR\n");
	printf("Digite 1� n�mero:");
	scanf("%lf", &x);
	
	printf("Digite 2� n�mero:");
	scanf("%lf", &y);	
	
	resultado = x + y;
	printf("Resultado: %.2f\n", resultado);
}
