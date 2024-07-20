/*Coloque na tela a tabuada do número 5.*/

#include <stdio.h>

int main() {

    int n = 0;

    while (n <= 10) {
        printf("5 x %2d = %2d\n", n, 5 * n);
        n = n + 1;
    }


    return 0;
}