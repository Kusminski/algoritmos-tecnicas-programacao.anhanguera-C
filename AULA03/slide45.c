#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool p;
	bool q;
	bool S;
	
	p = false;
	q = true;
	
	S = p && q;
	printf("Proposi��o: %d",S);
	
	S = p || q;
	printf("Proposi��o: %d",S);
	printf("Proposi��o: %d",!p);
}
