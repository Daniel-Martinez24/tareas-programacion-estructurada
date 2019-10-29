#include <stdio.h>
#include <stdlib.h>

// Por DANIEL MARTINEZ
int main() {
    int lista[9];
    for (int i = 0; i != 10; i+=1)
    {
        printf ("\n introduce el numero %d \n", i);
        scanf("%d", &lista[i]);
    }
    for (int i = 9; i != -1; i-=1)
    {
        printf ("\n el numero %d es %d \n", i, lista[i]);
    }

    return 0;
}