/* Leia uma matriz de [3][3] elementos. Calcule a soma dos elementos que estão
 na diagonal principal. */
 #include <stdio.h>

 #define N 3
 #define M 3

int line( int num, char ch ){
    for( int i = 0; i < num; i++ )
            putchar(ch);
            putchar('\n');
}

 int haupt( int matrix[N][M]){
     int haupt = 0;
        for( int i = 0; i< N; i++ )
            for( int j = 0; j < M; j++ )
                if( i == j )
                    haupt += matrix[i][j]; 
        return haupt;
 }

 int main(){
int matrix[N][M];
int count = 0;


printf("Informe %d valores da matrix[%d][%d].\n", N*M, N, M );

/* //automata
for( int i = 0; i < N; i++ ){
    for( int j = 0; j < M; j++ ){
        matrix[i][j] = 1;
    }
} */
for( int i = 0; i < N; i++ ){
    for( int j = 0; j < M; j++ ){
        scanf("%d", &matrix[i][j]);
    }
}
system("cls");
printf("\n");

for( int i = 0; i < N; i++ ){
    printf("\n");
    for( int j = 0; j < M; j++ ){
        printf("[%d%d]", i, j);
    }printf("\n");
}
putchar('\n');
for( int i = 0; i < N; i++ ){
    printf("\n");
    for( int j = 0; j < M; j++ ){
        if( i == j || i > j )
        printf("[%d%d]", i, j);
    }printf("\n");
}
for( int i = 0; i < N; i++ ){
    putchar('\n');
    for( int j = 0; j < M; j++ ){
        if( i == j || i > j ){
            printf("[%2d]", matrix[i][j] );
            count++;
        }
    }printf("\n");
}

printf("\nA soma dos %d elementos na diagonal principal eh.: [%d].\n", count, haupt(matrix));




line( 50, '=');




     return 0 ;
 }