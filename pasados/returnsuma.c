#include <stdio.h>
#include <stdlib.h>

// Por DANIEL MARTINEZ

int main() {
	int a, b, c;
	printf ("\n Dime una cantidad A \n ");
	scanf("%d", &a);
	printf ("\n Dime una cantidad B \n ");
	scanf("%d", &b);
	printf ("\n Dime una cantidad C \n ");
	scanf("%d", &c);

	if (a >= 13 && a < 15)
	{
		a = 0;
	}
	if (a > 16 && a <= 19) {
		a = 0;
	}

	if (b >= 13 && b < 15)
	{
		b = 0;
	}
	if (b > 16 && b <= 19) {
		b = 0;
	}

	if (c >= 13 && c < 15)
	{
		c = 0;
	}
	if (c > 16 && c <= 19) {
		c = 0;
	}

	a = a + b + c;

	printf("%d resultado de la suma \n", a);

	return 0;
}