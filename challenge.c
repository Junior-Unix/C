#include <stdio.h>
void mystery(int, int ,int);

int main(){
	int b = 5;
mystery(b, b--, --b);
return 0;

}

void mystery(int x, int y, int z){
printf("%d %d %d",x, y, z);
}
