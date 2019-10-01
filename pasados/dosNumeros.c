
#include <stdio.h>
#include <stdlib.h>

// Por DANIEL MARTINEZ
int main() {
	int numero1, numero2;
	printf ("\n Dime el numero1 \n ");
	scanf("%d", &numero1);
	printf ("\n Dime el numero2 \n ");
	scanf("%d", &numero2);

	if (numero1 >= 10)
	{
		numero1 =  numero1 - 10;
		numero1 = 10 -numero1;
		// numero2 = 10 - numero2;
	}
	if (numero2 >= 10)
	{
		// numero1 = 10 - numero1;
		numero2 = numero2 - 10;
		numero2 = 10 -numero2;
	}

	if (numero2 == numero1)
	{
		printf("0\n");
	}
	else {
		if (numero1 < numero2)
		{
			printf("El numero 2 es el mas cercano al 10\n");
		}
		else {
			printf("El numero 1 es el mas cercano al 10\n");
		}
	}
	return 0;
}