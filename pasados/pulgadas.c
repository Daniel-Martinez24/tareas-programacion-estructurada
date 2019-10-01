#include <stdio.h>
#include <stdlib.h>

// Por DANIEL MARTINEZ
int main() {
	int pulgada;
	float centimetros;
	printf ("\n Dime una cantidad en pulgada \n ");
	scanf("%d", &pulgada);

	centimetros = pulgada * 2.54;
	printf("%.2f centimetros \n", centimetros);

	
	return 0;
}