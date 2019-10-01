#include <stdio.h>
#include <stdlib.h>

// Por DANIEL MARTINEZ
int main() {
	int entrada, num1, num2;
	printf ("\n CALCULADORA \n Primero selecciona que operación quieres \n 1: Suma \n 2: Resta \n 3: multiplicación \n 4: division\n ");
	scanf("%d", &entrada);
	printf ("\n Escribe el primer numero ");
	scanf("%d", &num1);
	printf ("\n Escribe el segundo numero\n ");
	scanf("%d", &num2);


	switch (entrada) {
	    case 1:
	      entrada = num1 + num2;
	      printf ("\n El resultado de %d mas %d es %d", num1, num2, entrada);
	      // si no pongo el break se ejecutan hasta que se encuentre el break
	      break;
	    case 2:
	      entrada = num1 - num2;
	      printf ("\n El resultado de %d mas %d es %d", num1, num2, entrada);
	      break;
	    case 3:
	      entrada = num1 * num2;
	      printf ("\n El resultado de %d mas %d es %d", num1, num2, entrada);
	      break;
	    case 4:
	      entrada = num1 / num2;
	      printf ("\n El resultado de %d mas %d es %d", num1, num2, entrada);
	      break;
	    default:
	      printf ("\n No valido :/ ");
	      // default statements
	}
	return 0;
}