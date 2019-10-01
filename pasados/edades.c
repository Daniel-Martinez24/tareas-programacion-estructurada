#include <stdio.h>
#include <stdlib.h>

// Por DANIEL MARTINEZ
int main() {
	int edad1, edad2, var;
	var = 0;
	printf ("\n Dime la primera edad \n ");
	scanf("%d", &edad1);
	printf ("\n Dime la segunda edad \n");
	scanf("%d", &edad2);


	if (edad1 >=13 && edad1 <=25)
	{
		var = var + 1;
	}
	if (edad2 >=13 && edad2 <=25)
	{
		var = var + 1;
	}
	if (var == 1) {
		printf ("\n Correcto !\n");
	} else {
		printf ("\n Nel !\n");	
	}
	return 0;
}