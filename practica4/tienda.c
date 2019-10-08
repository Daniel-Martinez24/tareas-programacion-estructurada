#include <stdio.h>
#include <stdlib.h>

// Por DANIEL MARTINEZ
int main() {
	int entrada;
	// char salida;
	printf ("\n Escribe 1 si es lunes, 2 si es martes, 3 si es Miercoles, 4 si es Jueves, 5 si es Viernes, 6 si es Sabado, 7 si es Domingo. \n");
	scanf("%d", &entrada);


	switch (entrada) {
	    case 1:

	      printf ("\n 9am - 8pm");
	      break;
	    case 2:
	      printf ("\n 10am - 5pm");
	      break;
	    case 3:
	      printf ("\n 3pm - 10pm");
	      break;
	    case 4:
	      printf ("\n 8am - 4pm");
	      break;
	    case 5:
	      printf ("\n 8am - 1pm - 3pm -7pm");
	      break;
	    case 6:
	      printf ("\n 9am - 2pm");
	      break;
	    case 7:
	      printf ("\n Cerrado.");
	      break;
	    default:
	      printf ("\n Este mes no existe. ");
	      // default statements
	}
	return 0;
}