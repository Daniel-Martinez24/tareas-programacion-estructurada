#include <stdio.h>
#include <stdlib.h>

// Por DANIEL MARTINEZ
int main() {
	int entrada;
	printf ("\n Dime un numero del uno al 5 \n ");
	scanf("%d", &entrada);

	switch (entrada) {
	    case 1:
	      printf ("\n a");
	      // si no pongo el break se ejecutan hasta que se encuentre el break
	      break;
	    case 2:
	      printf ("\n bb");
	      break;
	    case 3:
	      printf ("\n ccc");
	      break;
	    case 4:
	      printf ("\n dddd");
	      break;
	    case 5:
	      printf ("\n eeeee");
	      break;
	    default:
	      printf ("\n No valido :/ ");
	}
	return 0;
}