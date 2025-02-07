#include <stdio.h>

int soma(int *a, int *b);

int main(){
	int s = 10;
	int u = 20;
	int *ptr_s;
	ptr_s = &s;

	// printf("%d\n%d\n", (void*)ptr_s, (void*)&s);
	// printf("%d\n%d", *ptr_s, s);
	printf("%d\n%d", s, u);
	soma(&s, &u);
	puts("\n");
	printf("%d\n%d", s, u);
}

int soma(int *a, int *b){
	*a = *a + *b;
	*b = *a + *b;
	return *a, *b;
}