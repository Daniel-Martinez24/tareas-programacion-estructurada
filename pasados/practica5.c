#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Por DANIEL MARTINEZ
int main() {
	char entrada;

	printf ("\n Dime un numero positivo o negativo ");
	scanf("%d", &entrada);

	// evaluea que la respuesta ingresada sea valida
	if (0 > entrada)
	{
		printf("Es un numero negativo \n");
	}
	else {
		printf ("\n Es un numero postivo  ");
	}
	return 0;
}