// gcc example.c -o HolaMundo
// Por Daniel Martinez

#include <stdio.h>


int main()
{
	#define PI 3.1416
	float radio, resultado;
	printf("Dame el valor del radio: \n");
	scanf("%f", &radio);
	resultado = radio * radio * PI;
	printf("El area del circulo es: %f\n", resultado);
	return 0;
}	