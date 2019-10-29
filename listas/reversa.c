#include <stdio.h>
#include <stdlib.h>


/*   char cadena1[4];
cadena1[0]='h'; cadena1[1]='o'; cadena1[2]='l'; cadena1[3]='a';
printf("La palabra en la variable cadena1 es: %c%c%c%c \n", cadena1[0],cadena1[1],cadena1[2],cadena1[3]);
*/

// Por DANIEL MARTINEZ
/*
-Crear un programa en C que duplique el contenido de un arreglo de caracteres con espacios de forma inversa y que imprima ambos sin espacios
*/

int main() {
    //printf("arreglo1 %c\n", cadena_hola[1]);
    
    char arreglo1[11] ="lorem imps";
    char arreglo2[11];

    int x = 0;
    //guardar el duplicado en reversa
    for (int i = 9; i != -1; i-=1)
    {  
        char temporal = arreglo1[i];
        //arreglo2[x] = arreglo1[i];
        arreglo2[x] = temporal;
        x+=1;
    }

    printf(" El arreglo es: %s\n", arreglo1);
    

    printf("\n arreglo1 sin espacios: \n ");
    for (int i = 0; i != 10; ++i)
    {
        char temporal = arreglo1[i];
        if (temporal != ' ') {
            printf("%c", arreglo1[i]);
        }
    }

    printf("\n ");
    printf("\n arreglo2 sin espacios \n ");

    for (int i = 0; i != 10; ++i)
    {
        if (arreglo2[i] != ' ') {
            printf("%c", arreglo2[i]);
        }
    }
    printf("\n ");
    return 0;
}