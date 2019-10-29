#include <stdio.h>
#include <stdlib.h>

// Por DANIEL MARTINEZ
int main() {
    int lista[14];
    int mayorValor;
    int menorValor;
    for (int i = 0; i != 15; i+=1)
    {
        printf ("\n introduce el numero %d \n", i);
        scanf("%d", &lista[i]);
    }

    mayorValor = 1;
    menorValor = 1;
    for (int i = 0; i != 15; i+=1)
    {   
        if (mayorValor < lista[i])
        {
            mayorValor = lista[i];
        }
    }

    for (int i = 0; i != 15; i+=1)
    {   
        if (menorValor > lista[i])
        {
            menorValor = lista[i];
        }
    }
    printf("el mayor Valor es : %d \n el menor Valor es: %d", mayorValor, menorValor);

    return 0;
}