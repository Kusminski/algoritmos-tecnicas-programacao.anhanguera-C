#include <stdio.h>

int main()
{
	unsigned char letra;
	unsigned short int idade;
	float salario; // N�o funciona com float
	long double numero_pi;

	printf("%d\n", sizeof(letra));
	printf("%d\n", sizeof(idade));
	printf("%d\n", sizeof(salario));
	printf("%d\n", sizeof(numero_pi));
}
