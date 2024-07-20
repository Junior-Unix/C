/*Coloque na tela os primeiros 10 números inteiros.*/

#include <stdio.h>

int main() {

    int i = 0;

    while (i < 10) {
        printf("%d\n", i);
        i = i + 1;
    }

    int n;
    n = 10;

    while(n /* ou n != 0*/) {
        printf("%d\n", n);
        n = n - 1;
    }

    return 0;
}