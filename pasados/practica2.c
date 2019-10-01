#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Por DANIEL MARTINEZ
int main() {
	#define diasEnAnio 365
	#define horasEndia 24
	#define minutosEnHoras 60
	#define segundosEnMinutos 60
	
	int anios;
	float dias, horas, minutos, segundos;
	printf ("\n Introdusca la cantidad de años que desea calcular  ");
	scanf("%d", &anios);

	dias = diasEnAnio * anios;
	printf("Dias %f \n", dias);
	horas = horasEndia * dias;
	printf("Horas %f\n", horas);
	minutos = minutosEnHoras * horas;
	printf("Minutos %f\n", minutos);
	segundos = segundosEnMinutos * minutos;
	printf("Segundos %f\n", segundos);
	
	return 0;
}