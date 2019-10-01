#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Por DANIEL MARTINEZ
int main() {
	srand(time(NULL)); 
	int numero = rand()%(101-1);
	char entrada;

	printf ("\n Dime un numero que sea mas alto que el numero que yo tengo ");
	scanf("%d", &entrada);

	// evaluea que la respuesta ingresada sea valida
	if (numero > entrada)
	{
		printf("Yo gano, el numero \n");
	}
	else {
		printf ("\n tu ganas  ");
	}
	return 0;
}