<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main(){


    int cont;
    char cod;
    float nota, media, total;
    total = 0;
    cod = 'C';

    while( cod != 'f'  ||  cod != 'F'){

        for( cont = 1; cont <= 4; cont++){
            printf("Digite as notas em sequência: ");
            scanf("%f", &nota);
            printf("%f\n", nota);
            total = total + nota;
        }
        media = total / 4;
        printf("Nota media: %f\n\n, media");
        total = 0;
        nota = 0;
        printf("Para sair pressione 'F'.\n\n");
        cod = getchar();
}
    return 0 ;
=======
#include <stdio.h>
#include <stdlib.h>

int main(){


    int cont;
    char cod;
    float nota, media, total;
    total = 0;
    cod = 'C';

    while( cod != 'f'  ||  cod != 'F'){

        for( cont = 1; cont <= 4; cont++){
            printf("Digite as notas em sequência: ");
            scanf("%f", &nota);
            printf("%f\n", nota);
            total = total + nota;
        }
        media = total / 4;
        printf("Nota media: %f\n\n, media");
        total = 0;
        nota = 0;
        printf("Para sair pressione 'F'.\n\n");
        cod = getchar();
}
    return 0 ;
>>>>>>> ba952dcbdd78676a50dccb02e812364ab08b49e7
}