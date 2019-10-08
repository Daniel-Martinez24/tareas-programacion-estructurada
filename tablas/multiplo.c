#include <stdio.h>
#include <stdlib.h>

/*Programa para de prueba de while
Mete un numero y te mostrara su table de multiplicación
*/

// Por DANIEL MARTINEZ
int main() {
	// inicando la variable que el usuario utilizara
	int num;
	printf("%d texto %d\n");
	scanf("%d", &num);
	int multiplo = 1;
	int maximo = num * 10;
	//Aquí empieza el while para hacer iniciar el bucle, el cual se ejecutara hasta llegar al 10000
	while( num < maximo) {
		// aqui hace la suma que permitira que el bucle
		num = num * multiplo;
		multiplo +=1;
		printf("%d \n", num);
	}
	return 0;
}