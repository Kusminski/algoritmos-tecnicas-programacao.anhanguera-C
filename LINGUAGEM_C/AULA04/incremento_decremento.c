#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int a = 1;
	int b = 1;	
	int c = 1;
	
	printf("Vari�vel: %d\n", a);
	printf("P�s-incremento: %d\n", a++);
	printf("Vari�vel: %d\n\n", a);
	
	printf("Vari�vel: %d\n", a);
	printf("Pr�-incremento: %d\n", ++a);
	printf("Vari�vel: %d\n\n", a);	
	
	printf("%d\n", b--);
	printf("%d\n", --b);
	
	c += 1;
	printf("%d\n", c);	
	
	c -= 1;
	printf("%d\n", c);		
	
	c *= 2;
	printf("%d\n", c);			
	
	c /= 2;
	printf("%d\n", c);				
}
