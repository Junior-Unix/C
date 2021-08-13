<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main(){
system("clear");
    float A, B, areaQ;
    

    printf("Informe os valores dos lados do quadrado:\n\n");
    printf("Lado A:\n");
    scanf("%f", &A);

    printf("Lado B:\n");
    scanf("%f", &B);

 system("clear");   
    printf("O valor está em metros(M), decimetros(d), centímetros(c) ou em milímetros(m)?\n\n");
    char unidadeA, unidadeB;
    scanf("%c%c", &unidadeA, &unidadeB);
    if( unidadeA, unidadeB == 'd' ){
        A = A / 10;
        B = B / 10;
        areaQ = A * B;
        printf("A área do quadrado de lado A = %f%c e lado B = %f%c é %f%cm².\n", A, unidadeA, B, unidadeB, areaQ, unidadeB);
    }else if( unidadeA, unidadeB == 'c' ){
        A = A / 100;
        B = B / 100;
        areaQ = A * B;
        printf("A área do quadrado de lado A = %f%c e lado B = %f%c é %f%cm².\n", A, unidadeA, B, unidadeB, areaQ, unidadeB);
    }else if( unidadeA, unidadeB == 'm' ){
        A = A / 1000;
        B = B / 1000;
        areaQ = A * B;
        printf("A área do quadrado de lado A = %f%c e lado B = %f%c é %f%cm².\n", A, unidadeA, B, unidadeB, areaQ, unidadeB);
    }else if (unidadeA != 'd', 'c', 'm'){
        printf("A unidade deste calculo será em metros!\n\n");
        unidadeA, unidadeB = 'M';
        areaQ = A * B;
        printf("A área do quadrado de lado A = %f%c e lado B = %f%c é %f%c².\n", A, unidadeA, B, unidadeB, areaQ, unidadeB);
    
    
    }else{
    
    
    areaQ = A * B;



    printf("A área do quadrado de lado A = %f%c e lado B = %f%c é %f%cm².\n", A, unidadeA, B, unidadeB, areaQ, unidadeB);
    }
    
    
    /*char unidadeB;
    printf("O valor está em metros(M), decimetros(d), centímetros(c) ou em milímetros(m)?");
    scanf("%c", &unidadeB);
    if( unidadeB == 'd' ){
        B = B / 10;
    }else if( unidadeB == 'c' ){
        B = B / 100;
    }else if( unidadeA == 'm' ){
        B = B / 1000;
    }else{
        printf("A unidade deste calculo será em metros!");
    }*/
    
    
    
    
    
    /*switch(unidadeA){
        case 'd': A = A/10;
        break;
        case 'c': A = A/100;
        break;
        case 'm': A = A/1000;
        break;
    }*/
    
    /*char unidadeB;
    printf("O valor está em metros(M), decimetros(d), centímetros(c) ou em milímetros(m)?");
    scanf("%c", &unidadeB);
    switch(unidadeB){
        case 'd': B = B/10;
        break;
        case 'c': B = B/100;
        break;
        case 'm': B = B/1000;
        break;
        break;
    }*/






    return 0 ;
=======
#include <stdio.h>
#include <stdlib.h>

int main(){
system("clear");
    float A, B, areaQ;
    

    printf("Informe os valores dos lados do quadrado:\n\n");
    printf("Lado A:\n");
    scanf("%f", &A);

    printf("Lado B:\n");
    scanf("%f", &B);

 system("clear");   
    printf("O valor está em metros(M), decimetros(d), centímetros(c) ou em milímetros(m)?\n\n");
    char unidadeA, unidadeB;
    scanf("%c%c", &unidadeA, &unidadeB);
    if( unidadeA, unidadeB == 'd' ){
        A = A / 10;
        B = B / 10;
        areaQ = A * B;
        printf("A área do quadrado de lado A = %f%c e lado B = %f%c é %f%cm².\n", A, unidadeA, B, unidadeB, areaQ, unidadeB);
    }else if( unidadeA, unidadeB == 'c' ){
        A = A / 100;
        B = B / 100;
        areaQ = A * B;
        printf("A área do quadrado de lado A = %f%c e lado B = %f%c é %f%cm².\n", A, unidadeA, B, unidadeB, areaQ, unidadeB);
    }else if( unidadeA, unidadeB == 'm' ){
        A = A / 1000;
        B = B / 1000;
        areaQ = A * B;
        printf("A área do quadrado de lado A = %f%c e lado B = %f%c é %f%cm².\n", A, unidadeA, B, unidadeB, areaQ, unidadeB);
    }else if (unidadeA != 'd', 'c', 'm'){
        printf("A unidade deste calculo será em metros!\n\n");
        unidadeA, unidadeB = 'M';
        areaQ = A * B;
        printf("A área do quadrado de lado A = %f%c e lado B = %f%c é %f%c².\n", A, unidadeA, B, unidadeB, areaQ, unidadeB);
    
    
    }else{
    
    
    areaQ = A * B;



    printf("A área do quadrado de lado A = %f%c e lado B = %f%c é %f%cm².\n", A, unidadeA, B, unidadeB, areaQ, unidadeB);
    }
    
    
    /*char unidadeB;
    printf("O valor está em metros(M), decimetros(d), centímetros(c) ou em milímetros(m)?");
    scanf("%c", &unidadeB);
    if( unidadeB == 'd' ){
        B = B / 10;
    }else if( unidadeB == 'c' ){
        B = B / 100;
    }else if( unidadeA == 'm' ){
        B = B / 1000;
    }else{
        printf("A unidade deste calculo será em metros!");
    }*/
    
    
    
    
    
    /*switch(unidadeA){
        case 'd': A = A/10;
        break;
        case 'c': A = A/100;
        break;
        case 'm': A = A/1000;
        break;
    }*/
    
    /*char unidadeB;
    printf("O valor está em metros(M), decimetros(d), centímetros(c) ou em milímetros(m)?");
    scanf("%c", &unidadeB);
    switch(unidadeB){
        case 'd': B = B/10;
        break;
        case 'c': B = B/100;
        break;
        case 'm': B = B/1000;
        break;
        break;
    }*/






    return 0 ;
>>>>>>> ba952dcbdd78676a50dccb02e812364ab08b49e7
}