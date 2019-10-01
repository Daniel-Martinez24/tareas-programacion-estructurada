#include <stdio.h>
#include <stdlib.h>

// Por DANIEL MARTINEZ
int main() {
	int numero;
	printf ("\n Un numero \n ");
	scanf("%d", &numero);

	for (numero; 0 < numero; --numero)
	{
		printf("%d ahorita vemos que pedo \n", numero);
	}
	return 0;
}