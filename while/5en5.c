#include <stdio.h>
#include <stdlib.h>

/*Programa para de prueba de while
Incrementar de 5 en 5 hasta llegar al 10000
*/

// Por DANIEL MARTINEZ
int main() {
	// inicando la variable numero a la que se le sumara
	int num = 0;

	//Aquí empieza el while para hacer iniciar el bucle, el cual se ejecutara hasta llegar al 10000
	while( num < 10000) {
		// aqui hace la suma que permitira que el bucle
		num += 5;
		// imprime
		printf("%d \n", num);
	}
	return 0;
}