#include <stdio.h>
#include <stdlib.h>

int calculadora(int num1, int num2, char operador) 
{
	switch (operador) {
	    case "+":
	      operador = num1 + num2;
	      printf ("\n El resultado de %d mas %d es %d", num1, num2, operador);
	      // si no pongo el break se ejecutan hasta que se encuentre el break
	      break;
	    case "-":
	      operador = num1 - num2;
	      printf ("\n El resultado de %d mas %d es %d", num1, num2, operador);
	      break;
	    case "*":
	      operador = num1 * num2;
	      printf ("\n El resultado de %d mas %d es %d", num1, num2, operador);
	      break;
	    case "/":
	      operador = num1 / num2;
	      printf ("\n El resultado de %d mas %d es %d", num1, num2, operador);
	      break;
	    default:
	      printf ("\n No valido :/ ");
	      // default statements
	}
}

int main()
{
	int operador, num1, num2;
	printf ("\n CALCULADORA \n Primero selecciona que operación quieres \n escribe '+' Suma \n '-' si es Resta \n '*' si es multiplicación \n '/' si es division\n ");
	scanf("%d", &operador);
	printf ("\n Escribe el primer numero ");
	scanf("%d", &num1);
	printf ("\n Escribe el segundo numero\n ");
	scanf("%d", &num2);

	calculadora(num1, num2, operador)
	return 0;
}