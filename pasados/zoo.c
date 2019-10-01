#include <stdio.h>
#include <stdlib.h>

// Por DANIEL MARTINEZ
int main() {
	int mandril1, mandril2;
	printf ("\n Dime el estado del mandril numero 1 c: 1 para que sonrria y 0 para que no lo haga\n ");
	scanf("%d", &mandril1);
	printf ("\n Dime el estado del segundo malandril:  1 para que sonrria y 0 para que no lo haga\n");
	scanf("%d", &mandril2);


	if (mandril1 == mandril2)
	{
		printf ("\n Error ! los 2 malandriles no pueden estar sonrriendo o no sonrriendo a la vez :/ \n");
	}
	else {
		printf("\n Perfecto ! todo bien, todo correcto y yo que me alegro c:");
	}
	return 0;
}