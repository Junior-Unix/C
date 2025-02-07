#include <stdio.h>
#include <stdlib.h>
main(int argc, char **argv){

int total;
argv++;
for(total=0;*argv!=NULL;argv++)
	total+=atoi(*argv);
printf("%d\n",total);


}
