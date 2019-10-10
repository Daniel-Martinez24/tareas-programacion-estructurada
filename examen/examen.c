#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroDeArticulo = 0, cantidadDeArticulo = 0, opccion=0;


    //Articulo 1 Libros
    int cantidadLibros=10, presioLibro=40, numeroDeLibro=1, ventasLibro=0;
    char descripcionLibro[15] = "Literatura";

    //Articulo 2 jugete
    int cantidadJuegete=10, presioJuegete=40, numeroDeJugete =2, ventasJuegete=0;
    char descripcionJuegete[15] = "Pa los niños";


    //Articulo 3 frutas
    int cantidadFruta=10, presioFruta=5, numeroDeFruta =3, ventasFruta=0;
    char descripcionFurta[15] = "Pa comer";


    //Articulo 4 camisas
    int cantidadCamisas=10, presioCamisas=50, numeroDeCamisas =4, ventasCamisas =0;
    char descripcionCamisas[15] = "Pa vestir";

    //Articulo 5 Compus
    int cantidadCompus=10, presioCompus=5000, numeroDeCompus =5, ventasCompus=0;
    char descripcionCompus[15] = "Pa programar";

    do{
        int opccionS=0;
        printf("Dime la opccionccion que deseas \n Escribe 1 si Ver los articulos. \n Escribe 2 para ver venta de mostrador \n Escribe 3 si deseas ver el inventario. \n Escribe 4 si deseas cerrar tiendad. \n");
        scanf("%d",&opccionS);

        switch(opccionS){
            case 1:
            {
                printf("El articulo libros cuesta %d, hay %d en el inventario, su descripcion es %s \n", presioLibro, cantidadLibros, descripcionLibro);
                printf("El articulo jugete cuesta %d, hay %d en el inventario, su descripcion es %s \n", presioJuegete, cantidadJuegete, descripcionJuegete);
                printf("El articulo frutas cuesta %d, hay %d en el inventario, su descripcion es %s \n", presioFruta, cantidadFruta, descripcionFurta);
                printf("El articulo camisas cuesta %d, hay %d en el inventario, su descripcion es %s \n", presioCamisas, cantidadCamisas, descripcionCamisas);
                printf("El articulo compus cuesta %d, hay %d en el inventario, su descripcion es %s \n", presioCompus, cantidadCompus, descripcionCompus);
                
                
            }
            break;
            case 2:
            {
                printf("Que numero de Articulo desdeas vender, 1: libros \n 2: jugetes \n 3: frutas \n 4: camisas \n 5: Compus \n");
                scanf("%d",&numeroDeArticulo);
                printf("Cuanto deseas comprar ?   \n");
                scanf("%d",&cantidadDeArticulo);
                switch(numeroDeArticulo) {
                    case 1: {
                        cantidadLibros = cantidadLibros - cantidadDeArticulo;
                        ventasLibro += cantidadDeArticulo;
                        if (cantidadLibros < 2)
                        {
                            printf("Alerta ! \n el articulo llego al menos del 20% ! \n ");
                        }
                    }
                    break;
                    case 2: {
                        cantidadJuegete = cantidadJuegete - cantidadDeArticulo;
                        ventasJuegete += cantidadDeArticulo;
                        if (cantidadJuegete < 2)
                        {
                            printf("Alerta ! \n el articulo llego al menos del 20% ! \n ");
                        }
                    }
                    break;
                    case 3: {
                        cantidadFruta = cantidadFruta - cantidadDeArticulo;
                        ventasFruta += cantidadDeArticulo;
                        if (cantidadFruta < 2)
                        {
                            printf("Alerta ! \n el articulo llego al menos del 20% ! \n ");
                        }
                    }
                    break;
                    case 4: {
                        cantidadCamisas = cantidadCamisas - cantidadDeArticulo;
                        ventasCamisas += cantidadDeArticulo;
                        if (cantidadCamisas < 2)
                        {
                            printf("Alerta ! \n el articulo llego al menos del 20% ! \n ");
                        }
                    }
                    break;
                    case 5: {
                        cantidadCompus = cantidadCompus - cantidadDeArticulo;
                        ventasCompus += cantidadDeArticulo;
                        if (cantidadCompus < 2)
                        {
                            printf("Alerta ! \n el articulo llego al menos del 20% ! \n ");
                        }
                    }
                    break;
                }
            }
            break;
            case 3:
            {
                if (cantidadLibros > 0)
                {
                    printf("El articulo libros esta disponible en venta, hay %d en el inventario\n",cantidadLibros);
                
                }
                else {
                    printf("Uy ya no hay libros, chale.\n");
                }
                if (cantidadJuegete > 0)
                {
                    printf("El articulo jugete esta disponible en venta, hay %d en el inventario\n",cantidadJuegete);
                
                }
                else {
                    printf("Uy ya no hay jugetes, chale.\n");
                }
                if (cantidadFruta > 0)
                {
                    printf("El articulo fruta esta disponible en venta, hay %d en el inventario\n",cantidadFruta);
                
                }
                else {
                    printf("Uy ya no hay frutas, chale.\n");
                }
                if (cantidadCamisas > 0)
                {
                    printf("El articulo camisas esta disponible en venta, hay %d en el inventario\n",cantidadCamisas);
                
                }
                else {
                    printf("Uy ya no hay camisas, chale.\n");
                }
                if (cantidadCompus > 0)
                {
                    printf("El articulo Compus esta disponible en venta, hay %d en el inventario\n",cantidadCompus);
                
                }
                else {
                    printf("Uy ya no hay compus, chale.\n");
                }
                
                
                
            }
            break;
            case 4:
            {
                printf("Ventas totales\n");
                printf("Se vendieron %d libros, %d jugetes, %d frutas, %d camisas, %d compus\n", ventasLibro, ventasJuegete, ventasFruta, ventasCamisas, ventasCompus);
                if (cantidadLibros > 0)
                {
                    printf("El articulo libros esta disponible en venta, hay %d en el inventario\n",cantidadLibros);
                
                }
                else {
                    printf("Uy ya no hay libros, chale.\n");
                }
                if (cantidadJuegete > 0)
                {
                    printf("El articulo jugete esta disponible en venta, hay %d en el inventario\n",cantidadJuegete);
                
                }
                else {
                    printf("Uy ya no hay jugetes, chale.\n");
                }
                if (cantidadFruta > 0)
                {
                    printf("El articulo fruta esta disponible en venta, hay %d en el inventario\n",cantidadFruta);
                
                }
                else {
                    printf("Uy ya no hay frutas, chale.\n");
                }
                if (cantidadCamisas > 0)
                {
                    printf("El articulo camisas esta disponible en venta, hay %d en el inventario\n",cantidadCamisas);
                
                }
                else {
                    printf("Uy ya no hay camisas, chale.\n");
                }
                if (cantidadCompus > 0)
                {
                    printf("El articulo Compus esta disponible en venta, hay %d en el inventario\n",cantidadCompus);
                
                }
                else {
                    printf("Uy ya no hay compus, chale.\n");
                }

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