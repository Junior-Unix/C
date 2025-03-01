#include "stdio.h"
#include <string.h>
int main() {
    struct sPessoa *F;
    Inic(&F);
    int i;

    for (i = 0; i < 1000; i++) {
        printf("Inserir:\n");
        Inserir(&F, i, "João");
        printf("Listar:\n");
        Listar(F);
        printf("Apagar:\n");
        Apagar(&F);
        printf("Listar:\n");
        Listar(F);
    }

    return 0;
}
