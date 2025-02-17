#include <stdio.h>

int soma(x,y){
	return x+y;
}


void main(void){
	
	int p = 1;
	int* n;

	n=&p;

	printf("%d %d %d %d\n",n, *n, &p,p);
//	p=2;
	*n=2;
	printf("%d %p %d",&*n,n,p);

}
