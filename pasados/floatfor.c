#include <stdio.h>
#include <stdlib.h>

// Por DANIEL MARTINEZ
int main() {

	for (float i = -1.99999; i < 1.99999; i= i+0.00001)
	{
		printf("%f\n", i);
	}
	return 0;
}