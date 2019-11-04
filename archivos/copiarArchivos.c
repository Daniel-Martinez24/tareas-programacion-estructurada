#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void main()
{
	FILE *archivoOrginal, *nuevoArchivo;
	char fname[20], otraLista[20];
	char contenido;
	int posicion, cantidad;
    printf("\n\n Copiar Archivos :\n");
	printf("------------------------------\n");
	printf(" Ingresa el nombre del archivo copiar : ");
	scanf("%s",fname);
	printf(" cuantas copias quieres : ");
	scanf("%d",&cantidad);
	printf("aqui.\n");



	for (cantidad; cantidad != 0; --cantidad)
	{

		archivoOrginal = fopen (fname, "r");

		if (archivoOrginal == NULL)
		{	
			printf(" El archivo no existe o no puede ser abierto.\n");
			exit(0);
		}


		int verificar = 0;
	    for (int i = 0; i != 20; i+=1)
	    {  
	    	if (verificar == 0)
	    	{
	    		if (fname[i] != '.')
		    	{
		    		char temporal = fname[i];
			        otraLista[i] = temporal;
		    	}
		    	else {
		    		char c = '0' + cantidad;
		    		// printf("var es  : %c\n", c);
		    		
		    		otraLista[i] = c;
		    		verificar = 2;
		    	}
	    	}
	    	else {
	    		if (fname[i] != '.')
		    	{
		    		char temporal = fname[i-1];
			        otraLista[i] = temporal;
		    	}
	    	}
	    }
		
	    nuevoArchivo=fopen(otraLista,"w");
	    // Guardado	    

		printf("\n El cnumero de lista es %s es  :\n",otraLista);

		contenido = fgetc(archivoOrginal);

			
		// EOF es igual hace referencia al "caracter" del final de un archivo.
		while (contenido != EOF)
			{
				// aquí va imprimiendo linea por linea el contenido del fichero
				printf ("%c", contenido);
				fputc(contenido, nuevoArchivo);
				contenido = fgetc(archivoOrginal);
			}


		// Guardado
	    fclose(nuevoArchivo);

		fclose(archivoOrginal);
	}


    printf("\n\n");
} 





	// NOMBRES
	/*
    int verificar = 0;
    for (int i = 0; i != 20; i+=1)
    {  
    	if (verificar == 0)
    	{
    		if (fname[i] != '.')
	    	{
	    		char temporal = fname[i];
		        otraLista[i] = temporal;
	    	}
	    	else {
	    		char c = '0' + i;
	    		printf("var es  : %c\n", c);
	    		
	    		otraLista[i] = c;
	    		verificar = 2;
	    	}
    	}
    	else {
    		if (fname[i] != '.')
	    	{
	    		char temporal = fname[i-1];
		        otraLista[i] = temporal;
	    	}
    	}
    	
        
    }
	
	printf("\n heres \n");
	printf(" %s \n", fname);
	printf("%s", otraLista);

	printf("\n heres \n");
	*/
	// NOMBRES
