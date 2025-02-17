#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char *filename = "Dados.Dat";
    int buffer;

    file = fopen(filename, "rb");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    while (fread(&buffer, sizeof(int), 1, file)) {
        printf("%d\n", buffer);
    }

    fclose(file);
    return 0;
}