#include <stdio.h>
#include <stdlib.h>

// Por DANIEL MARTINEZ
int main() {
	int x = 0;
	while (x == 0) {

		int entrada, deseasContinuar;
		// char salida;
		printf ("\n dime un producto del 20 al 30 \n  ");
		scanf("%d", &entrada);
		switch (entrada) {
		    case 20:

		      printf ("\n el resultado de !20 = 2432902008176640000");
		      break;
		    case 21:
		      printf ("\n el resultado de !21 = 51090942171709440000");
		      break;
		    case 22:
		      printf ("\n el resultado de !22 = 1124000727777607680000");
		      break;
		    case 23:
		      printf ("\n el resultado de !23 = 25852016738884976640000");
		      break;
		    case 24:
		      printf ("\n el resultado de !24 = 620448401733239439360000");
		      break;
		    case 25:
		      printf ("\n el resultado de !25 = 15511210043330985984000000");
		      break;
		    case 26:
		      printf ("\n el resultado de !26 = 403291461126605635584000000");
		      break;
		    case 27:
		      printf ("\n el resultado de !27 = 10888869450418352160768000000");
		      break;
		    case 28:
		      printf ("\n el resultado de !28 = 304888344611713860501504000000");
		      break;
		    case 29:
		      printf ("\n el resultado de !29 = 8841761993739701954543616000000");
		      break;
		    case 30:
		      printf ("\n el resultado de !30 = 265252859812191058636308480000000");
		      break;
		    default:
		      printf ("\n No es un numero valido");
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