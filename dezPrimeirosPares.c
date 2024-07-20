/*PRograma que escreve os 10 primeiros números pares.*/

#include <stdio.h>

int main() {

    int i;

    for(i=1; i<=10; i=i+1){
        printf("%2d\n", 2*i);
    }

    return 0;
}