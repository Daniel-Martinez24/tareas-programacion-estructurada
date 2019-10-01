#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

// Por DANIEL MARTINEZ
int main() {
	printf(" El tamanio en bytes de int es : %d\n",sizeof(int));
	printf(" El tamanio en bytes de char es : %d\n",sizeof(char));
	printf(" El tamanio en bytes de float es : %d\n",sizeof(float));
	printf(" El tamanio en bytes de short es : %d\n",sizeof(short));
	printf(" El tamanio en bytes de long type : %d\n",sizeof(long));
	printf(" El tamanio en bytes de long long es : %d\n",sizeof(long long));
	printf(" El tamanio en bytes de double es : %d\n",sizeof(double));
	printf(" El tamanio en bytes de long double data es : %d\n",sizeof(long double));
	printf(" El tamanio en bytes de bool es : %d\n",sizeof(bool));
	
	return 0;
}