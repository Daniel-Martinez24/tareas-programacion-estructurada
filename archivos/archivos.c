#include <stdio.h>


// Daniel Martinez
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
