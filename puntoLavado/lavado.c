#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanio=0, total=0, coches=0, opccion=0, chico=0 , mediano=0 , grande=0;
    do{
        int opccionS=0;
        printf("Dime la opccionccion que deseas \n Escribe 1 si deseas lavar un auto. \n Escribe 2 para ver las ventas todales \n Escribe 3 reporte total. \n");
        scanf("%d",&opccionS);

        switch(opccionS){
            case 1:
            {
                printf("De que tamaño es el vehiculo\n 1 si es chico\n 2 si es mediano\n 3 si es grande\n\n");
                scanf("%d",&tamanio);
                if(tamanio==1){
                    chico++;
                    total+=50;
                }
                if(tamanio==2){
                    mediano++;
                    total+=70;
                }
                if(tamanio==3){
                    grande++;
                    total+=100;
                }
                coches++;
            }
            break;
            case 2:
            {
                printf("Se vendio %d y se lavaron %d de coches  \n\n",total,coches);

            }
            break;
            case 3:
            {
                printf("Se lavaron %d coches chicos  \n\n",chico);
                printf("Se lavaron %d coches medianos  \n\n",mediano);
                printf("Se lavaron %d coches grandes  \n\n",grande);

            }
            break;

            default: printf("Esta respuesta no es valida\n");
        }
        printf("Escribe 1 si desdeas continuar, 2 si no. \n");
        scanf("%d",&opccion);
    }
    while(opccion);
    printf("Menu principal\n");
    return 0;
}