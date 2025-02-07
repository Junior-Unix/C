#include <stdio.h>

main(int argc, char *argv[]){

	for(int i = 0; i < argc; i++)
		printf("%d - Parametro = \%s\"\n",i+1, argv[i]);


}
