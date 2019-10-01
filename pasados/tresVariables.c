
#include <stdio.h>
#include <stdlib.h>

// Por DANIEL MARTINEZ
int main() {
	int a, b, c, d, contador;
	contador = 0;
	printf ("\n Dime el numero a \n ");
	scanf("%d", &a);
	printf ("\n Dime el numero b \n ");
	scanf("%d", &b);
	printf ("\n Dime el numero c \n ");
	scanf("%d", &c);
	printf ("\n Dime el numero d \n ");
	scanf("%d", &d);

	if (a == 10 || b == 10 || c == 10 || d == 10)
	{
		contador += 1;
	}

	if (a >= 13 && a <= 19 || b >= 13 && b <= 19 || c >= 13 && c <= 19 || d >= 13 && d <= 19)
	{
		contador += 1;
	}

	if (contador == 2)
	{
		printf ("\n Verdadero \n ");
	}
	else
	{
		printf ("\n Falso \n ");
	}

	return 0;
}