#include <stdio.h>
#include <stdlib.h>

// Por DANIEL MARTINEZ
int main() {
	char entrada;

	printf ("\n Dime un numero y te dire que dia de la semana es c: ");
	scanf("%d", &entrada);

	switch (entrada) {
	    case 1:
	      printf ("\n Dia lunes de '¿A que voy a la escuela?'");
	      // si no pongo el break se ejecutan hasta que se encuentre el break
	      break;
	    case 2:
	      printf ("\n Dia martes de frescura");
	      // statements
	      break;
	    case 3:
	      printf ("\n Dia miercoles de tacos 2x1");
	      // statements
	      break;
	    case 4:
	      printf ("\n Dia jueves de ahorcar foraneas");
	      // statements
	      break;
	    case 5:
	      printf ("\n Dia viernes de ahorcar rucas");
	      // statements
	      break;
	    case 6:
	      printf ("\n Dia Sabado de ahorcar batos con las piernas");
	      // statements
	      break;
	    case 7:
	      printf ("\n Dia Domingo de ir a la iglesia amen");
	      // statements
	      break;
	    default:
	      printf ("\n No valido :/ ");
	      // default statements
	}
	return 0;
}