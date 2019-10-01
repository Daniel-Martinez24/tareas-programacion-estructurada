
#include <stdio.h>
#include <stdlib.h>

// Por DANIEL MARTINEZ
int main() {
	int numero;
	printf ("\n Dime el numero \n ");
	scanf("%d", &numero);

	for (numero; numero > 100; numero -= 100)
	{
		/* code */
	}
	if (numero >= 85 && numero <= 100)
	{
		printf("true\n");
	}
	else 
	{
		printf("false\n");
	}

	return 0;
}