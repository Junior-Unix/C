/*Alterar a forma como a expressao eh escrita na tela
uma soh vez.*/

#include <stdio.h>

void main() {

    int num1, num2, res = 0;
    char op;

    printf("Escreva uma expressão: ");
    scanf("%d %c %d", &num1, &op, &num2);

    switch(op) {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case 'x':
        case 'X':
            res = num1 * num2;
            break;
        case '/':
        case'\\':
        case':':
            res = num1 / num2;
            break;
    }

    printf("%d %c %d = %d\n", num1, op, num2, res);
}