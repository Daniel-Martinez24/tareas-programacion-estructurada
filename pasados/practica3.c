#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Por DANIEL MARTINEZ
int main() {
	srand(time(NULL)); 
	int numero = rand()%(101-1);

	//
	int resultante = numero % 2;
	int entrada;
	char resultado; 
	printf ("\n Es numero %d es par o impar? escribe '0' si es par o si no lo es '1' ", numero);
	scanf("%d", &entrada);

	// evaluea que la respuesta ingresada sea valida
	if (entrada == 1 || entrada == 0)
	{
		// al sacar el resultante de devidir entre 2 solo hay 2 respuestas posibles 0 si es par o 1 si es impar		
		if (entrada == resultante)
			{		
				printf ("Correcto !");
			}
			else {
				printf("Error");
			}
	}
	else {
		printf ("%d\n no es una respuesta valida ", entrada);
	}
	// printf ("Otros numeros aleatorios son: %d, %d, %d\n",rand(),rand(),rand()) ;
	// printf("La constante RAND_MAX vale %d\n", RAND_MAX);
	return 0;
}