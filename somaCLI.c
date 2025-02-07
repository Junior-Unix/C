#include <stdio.h>

main(int argc, char *argv[]){
	int total;

	for( int i = 0; i < argc; i++)
		total += atoi( argv[i]);
	printf("%d\n", total);
}
