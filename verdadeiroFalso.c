#include <stdio.h>

void main() {
    int x, y;
    printf("Introduza 2 inteiros: ");
    scanf("%d:", &x);
    printf("Outro: ");
    scanf("%d:", &y);

    printf("O resultado de %d == %d: %d\n", x, y, x==y);
    printf("O resultado de %d >  %d: %d\n", x, y, x>y);
    printf("O resultado de %d >= %d: %d\n", x, y, x>=y);
    printf("O resultado de %d <  %d: %d\n", x, y, x<y);
    printf("O resultado de %d <= %d: %d\n", x, y, x<=y);
    printf("O resultado de %d != %d: %d\n", x, y, x!=y);

    return 0;
}
