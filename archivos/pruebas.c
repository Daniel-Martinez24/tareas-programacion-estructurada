#include <stdio.h>

int main(){ 
	// declara file F1
	FILE *f1;
	char c;

	printf ("\n para finalizar oprime EOF (ctrl-Z) \n");

	// abre el arivo open
	f1= fopen("INPUT.txt", "w");
	// putc( 'b', f1 );

	// hasta que la letra no sea diferente a EOF no terminara de ejecutrar este while
	while ( ( c = getchar() ) != EOF){
        putc( c, f1 );
    } 
	fclose(f1);


	printf ("\n imprimir el contenido de INPUT.txt \n");

	// lecutura de documento
	f1=fopen("INPUT.txt", "r");

	while((c=getc(f1))!=EOF){

		printf("%c", c);
	}

	fclose(f1);
	return 1;
}



/*

int main()
{
   // char nombre[11]="INPUT.txt";
   FILE *fichero;

   fichero = fopen( "INPUT.txt", "w" );
   printf( "Fichero: %s -> ", "INPUT.txt" );

   // este if es ingenioso, sirve para primero evuluar si algo o no y actuar segun eso. :0
   if( fichero )
      printf( "creado (ABIERTO)\n" );
   else
   {
      printf( "Error (NO ABIERTO)\n" );
      return 1;
   }


   // aquí ocurre la magia
   // por cada  25 es decir letra de abcdario, hacer putc

   // el i+b indica que los numeros del abcderario segun la posicion i
   for(int i=0; i<25; i++ )   putc( i+'b', fichero );

   if( !fclose(fichero) )
      printf( "\nFichero cerrado\n" );
   else
   {
      printf( "\nError: fichero NO CERRADO\n" );
      return 1;
   }

   return 0;
}



#include <stdio.h>
#include <stdlib.h>
 
int main (){
    
    char variable;
    
    //hasta que la letra no sea un numero cero no se para
    while ( ( variable = getchar() ) != '0'){
        putchar(variable);
        printf(" -Bucle yupiiiii\n");
    }  
    
    getchar(); // no te líes que este getchar es solo para pausar y no tiene nada que ver con el bucle XDD
    return 0;
}
 

*/