/*Sequência números naturais concatenados*/

#include <stdio.h>

int main(){
    int i,j;
        for(i=1; i<=10; i=i+1){
            for(j=1; j<=i; j=j+1)
                printf("%d", j);
            putchar('\n');
        }
}


// 1. **Primeiro loop (i):**
//    - Inicializa a variável `i` com o valor 1.
//    - A condição `i <= 10` verifica se `i` é menor ou igual a 10.
//    - Se a condição for verdadeira, o bloco de código dentro do primeiro loop é executado.
//    - O bloco de código imprime o valor de `j` (que varia de 1 a `i`) sem pular linhas.

// 2. **Segundo loop (j):**
//    - Inicializa a variável `j` com o valor 1.
//    - A condição `j <= i` verifica se `j` é menor ou igual a `i`.
//    - Se a condição for verdadeira, o bloco de código dentro do segundo loop é executado.
//    - O bloco de código imprime o valor de `j`.

// 3. **Resultado:**
//    - O código imprime a sequência de números de 1 a 10, conforme a seguir:
//      ```
//      1
//      12
//      123
//      1234
//      12345
//      123456
//      1234567
//      12345678
//      123456789
//      12345678910
//      ```
//    - Cada linha representa os números de 1 até o valor atual de `i`.

