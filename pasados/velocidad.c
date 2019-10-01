#include <stdio.h>
#include <stdlib.h>

// Por DANIEL MARTINEZ
int main() {
	int velocidad, cumple;
	printf ("\n Dime la velocidad a la que va \n ");
	scanf("%d", &velocidad);
	printf ("\n Dime si es su cumpleaños: 1 si es verdadero \n");
	scanf("%d", &cumple);
	if (cumple == 1) {
		velocidad = velocidad - 5;
	}


	if (velocidad <= 60)
	{
		printf ("\n No hay multa \n ");
	}
	if (velocidad >= 61 && velocidad <= 80)
	{
		printf ("\n multa chikita \n ");
	}
	if (velocidad >= 81) {
		printf ("\n multa grandesita \n");
	}
	return 0;
}