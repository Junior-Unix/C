<<<<<<< HEAD
#include <stdio.h>

int main(void){

        float A, B, C, iso;
        scanf("%f", &A);
        scanf("%f", &B);
        scanf("%f", &C);

        if( A == B == C){
            printf("Triângulo equilátero.");
        }else if (( A == B !=C ) || ( B ==C != A) || ( C = A != B )) {
            printf("Triângulo Isósceles.");
        }else if(( A != B != C ) && ( A + B < C) && ( B + C < A) && ( A + C < B)){
            printf("Triângulo escaleno.");
        }else{
            printf("Não é um triângulo.");
        }



    return 0 ;
=======
#include <stdio.h>

int main(void){

        float A, B, C, iso;
        scanf("%f", &A);
        scanf("%f", &B);
        scanf("%f", &C);

        if( A == B == C){
            printf("Triângulo equilátero.");
        }else if (( A == B !=C ) || ( B ==C != A) || ( C = A != B )) {
            printf("Triângulo Isósceles.");
        }else if(( A != B != C ) && ( A + B < C) && ( B + C < A) && ( A + C < B)){
            printf("Triângulo escaleno.");
        }else{
            printf("Não é um triângulo.");
        }



    return 0 ;
>>>>>>> ba952dcbdd78676a50dccb02e812364ab08b49e7
}