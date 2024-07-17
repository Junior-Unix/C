#include <stdio.h>

void main(){

    int n1, n2;
    printf("Digite dois numeros: ");
    scanf("%d%d", &n1, &n2);
    printf("O resutado de %d + %d = %d\n", n1, n2, n1 + n2);

    float snum;
    printf("Digite um valor: ");
    scanf("%f", &snum);
    printf("O valor foi %.2f\n", snum);

printf("Tamanho em bytes char = %d\n", sizeof(char));
printf("Tamanho em bytes int = %d\n", sizeof(int));
printf("Tamanho em bytes short int = %d\n", sizeof(short int));
printf("Tamanho em bytes long int = %d\n", sizeof(long int));
printf("Tamanho em bytes log double = %d\n", sizeof(long double));
printf("Tamanho em bytes double = %d\n", sizeof(double));
printf("Tamanho em bytes float = %d\n", sizeof(float));

    int num;
    num = -17;
    int a = 10, b, c = -123, d;

    int val = num;

    printf("\t%d %d\n",num, num+1);

    printf("C\nis \"the\" greatest\nLanguage!\n");
}