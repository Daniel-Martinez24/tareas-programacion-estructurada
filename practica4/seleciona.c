#include <stdio.h>
#include <stdlib.h>

// Por DANIEL MARTINEZ
int main() {
	int x = 0;
	while (x == 0) {

		int entrada, deseasContinuar;
		// char salida;
		printf ("\n Selecciona un Programa anterior. \n 1.- numeroMes.exe \n 2.- 5en5.exe \n 3.- multiplo.exe \n 4.- calculadora.exe \n 5.- cadenaNumeros.exe  \n");
		scanf("%d", &entrada);
		switch (entrada) {
		    case 1:
		      system("numeroMes.exe");
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
		printf ("\n Deseas Continuar ? si no, escribe 1  \n");
		scanf("%d", &deseasContinuar);
		if (deseasContinuar == 1)
		{
			x = 1;
		}
	}
	return 0;
}