#include <stdio.h>
#include <stdlib.h>
// Por DANIEL MARTINEZ
/*
  Crear un programa que almacene un arreglo de 15 elementos enteros ingresados por el usuario.
   Ahora solicitar el numero del elemento que debe ser borrado,
   imprimir el arreglo y preguntar si se desea continuar, permitir agregar y borrar elementos hasta que el usuario lo decida.*/

int main() {
    //printf("arreglo1 %c\n", cadena_hola[1]);
    
    int lista[20];

              int nuevaLista[20];
    int evaluador = 0;
    int numero = 20;
    int entrada;

    int x;
    int posicion;
    int cantidad = 20;
    for(int i = 0; i != 15; i+=1)
    {
        printf ("\n introduce el numero %d \n", i);
        scanf("%d", &lista[i]);
    }


    while (evaluador == 0)
    {
        printf ("\n Primero selecciona que operacion quieres \n 1: eliminar un numero \n 2: agregar \n 3: ver la lista \n ");
        scanf("%d", &entrada);

        switch (entrada) {
            case 1:
              printf ("\n introduce la posicion del elemento que deseas eliminar \n");
              scanf("%d", &posicion);

              for(int i = 20; i > -1; i-=1){
                  if (i != posicion)
                  {
                    nuevaLista[i] = lista[i];
                  }
              }
              for(int i = 20; i>-1; i-=1){
                 nuevaLista[i] = lista[i];  
              }
              break;
            case 2:
              printf ("\n introduce el numero que deseas añadir \n");
              scanf("%d", &lista[numero]);
              numero--;
              break;
            case 3:
              printf ("\n La lista es: ");
              for(int i = 0; i != 21; i+=1){
                printf("posicion %d es %d. \n", i, lista[i]);;  
              }

              break;
            default:
              printf ("\n error ");
              // default statements
        }
        printf ("\n deseas continuar ? \n 1: salir \n 2: proseguir ");
        scanf("%d", &entrada);

        switch (entrada) {
            case 1:
              evaluador++;
            case 2:
              printf ("\n ");
              break;
            case 3:
            default:
              printf ("\n No es una entrada valida");
              // default statements
        }
    }
}