
#include <stdio.h>
#include <stdlib.h>

// Por DANIEL MARTINEZ
int main() {
	int numero, mitad, entrada, piramide2, piramide3;
	printf ("\n 1: Piramide de astericos 2: Piramide de numeros incrementando 3: Piramide de numero de pisos \n ");
	scanf("%d", &entrada);
	printf ("\n Dime cuantos pisos quieres \n ");
	scanf("%d", &numero);
	mitad = numero;
	piramide2 = numero + 1;
	piramide3 = 0;
	printf("%i\n", mitad);
	switch (entrada) {
	    case 1:
		    for (int i = 0; i <= numero; ++i)
			{
				for (int i = 0; i < mitad; ++i)
				{
					printf(" ");
				}

				for (int e = 0; e < i; ++e)
				{
					printf("* ");
				}
				printf("\n");
				mitad -= 1;

				
			}
	      break;
	    case 2:
	    for (int i = 0; i <= numero; ++i)
		{
			for (int i = 0; i < mitad; ++i)
			{
				printf(" ");
			}

			for (int e = 0; e < i; ++e)
			{
				printf("%i ", piramide2);
			}
			printf("\n");
			mitad -= 1;
			piramide2 -= 1;

			
		}
	      break;
	    case 3:
	    for (int i = 0; i <= numero; ++i)
		{
			for (int i = 0; i < mitad; ++i)
			{
				printf(" ");
			}

			for (int e = 0; e < i; ++e)
			{
				printf("%i ", piramide3);
				piramide3 += 1;
			}
			printf("\n");
			mitad -= 1;

			
		}
	      break;
	    default:
	      printf ("\n No valido :/ ");
	      // default statements
	}

	return 0;
}