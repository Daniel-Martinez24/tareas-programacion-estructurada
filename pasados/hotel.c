#include <stdio.h>
#include <stdlib.h>

// Por DANIEL MARTINEZ
int main() {
	int entrada;
	// char salida;
	printf ("\n CALCULADORA \n Primero selecciona que operacion quieres \n 1: Azul \n 2: Roja \n 3: Verde \n 4: Rosa\n 5: Gris");
	printf ("\n Que habitacion deseas ? \n");
	scanf("%d", &entrada);


	switch (entrada) {
	    case 1:

	      printf ("\n Tu habitacion tiene 2 camas y esta en la primera planta");
	      break;
	    case 2:
	      printf ("\n Tu habitacion tiene 1 camas y esta en la primera planta");
	      break;
	    case 3:
	      printf ("\n Tu habitacion tiene 3 camas y esta en la segunda planta");
	      break;
	    case 4:
	      printf ("\n Tu habitacion tiene 2 camas y esta en la segunda planta");
	      break;
	    case 5:
	      printf ("\n Tu habitacion tiene 1 camas y esta en la tercera planta");
	      break;
	    default:
	      printf ("\n Tu habitacion no existe ");
	      // default statements
	}
	return 0;
}