/*Dada uma letra, indique qual o estado civel de uma pessoa*/

#include <stdio.h>

int main() {
    char estado_civil;
    
    printf("Digite o estado civil (S para solteiro, C para casado): ");
    scanf(" %c", &estado_civil);
    
    const char* status = (estado_civil == 'S') ? "Solteiro" : "Casado";
    
    printf("Estado civil: %s\n", status);
    
    return 0;
}
