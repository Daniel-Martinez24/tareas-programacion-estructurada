#include <stdio.h>
#include <stdlib.h>


/*   char cadena1[4];
cadena1[0]='h'; cadena1[1]='o'; cadena1[2]='l'; cadena1[3]='a';
printf("La palabra en la variable cadena1 es: %c%c%c%c \n", cadena1[0],cadena1[1],cadena1[2],cadena1[3]);
*/

// Por DANIEL MARTINEZ
/*
 Crear un programa en c que indique el numero de elementos duplicados en un arreglo de 15 elementos previamente ingresados por el usuario.
 */

int main() {
    //printf("arreglo1 %c\n", cadena_hola[1]);
    
    char lista[20];
    int repetecion = 0; 
    char palabra;

    for (int i = 0; i != 15; i+=1)
    {
        printf ("\n introduce el numero %d \n", i);
        scanf("%d", &lista[i]);
    }
    for (int i = 0; i != 15; ++i)
    {
        for (int x = 0; x != 15; ++x)
        {
            if (i != x)
            {
                // printf("%c\n", lista[x]);
                if (lista[i] == lista[x])
                {
                    // printf("lista[%d] y lista[%d], los valores son %d y %d \n", i,x, lista[i], lista[x]);
                    repetecion+=1;
                }
            }
        }
    }

    repetecion = repetecion /2;
    printf("\n hubo un total de %d elementos que se repiten", repetecion );
    return 0;
}