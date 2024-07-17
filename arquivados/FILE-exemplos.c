#include <stdio.h>

#define N 20
int main(){
    
    FILE *f;
    
    /* f = fopen("texto.txt", "w");
        if( f == NULL){
            printf("Erro na abertura!\n");
            system("pause");
            exit(1);//aborta o programa.
        }
        char texto[N] = "Meu programa em C";

        for( int i = 0; i < strlen(texto); i++ )
            fputc(texto[i], f);
            
        fclose(f); */
    f = fopen("texto.txt", "r");
        if( f == NULL ){
            printf("Erro na leitura!");
            system("pause");
            exit(1);
        }
    char c;

//    for( int i = 1; i <= N; i++ ){// para ler uma quantia especifica.
    while( c != EOF ){//ou (!feof(f)); para trabalhar com arquivos binários.
        c = fgetc(f);
        printf("%c", c);
    }
    fclose(f);
     
    return 0 ;
}