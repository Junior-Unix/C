<<<<<<< HEAD
/* Calcule as raízes da equação de 2º grau. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float a, b, c = 0 ;
    

    printf("Digite os valores da equação seguinte ax²+bx+c=0.\n");
    printf("a:\n:");
    scanf("%f", &a);
    printf("b:\n:");
    scanf("%f", &b);
    printf("c:\n");
    scanf("%f", &c);
    float delta = ((b*b) - ( 4 * a * c ));
    printf("%.2f\n\n", delta);
 
    float x1 = (-b + (sqrt(delta)) / ( 2 *a ));
    float x2 = (-b - (sqrt(delta)) / ( 2 *a ));

  printf("%lf%lf", x1, x2);






    return 0 ;
=======
/* Calcule as raízes da equação de 2º grau. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float a, b, c = 0 ;
    

    printf("Digite os valores da equação seguinte ax²+bx+c=0.\n");
    printf("a:\n:");
    scanf("%f", &a);
    printf("b:\n:");
    scanf("%f", &b);
    printf("c:\n");
    scanf("%f", &c);
    float delta = ((b*b) - ( 4 * a * c ));
    printf("%.2f\n\n", delta);
 
    float x1 = (-b + (sqrt(delta)) / ( 2 *a ));
    float x2 = (-b - (sqrt(delta)) / ( 2 *a ));

  printf("%lf%lf", x1, x2);






    return 0 ;
>>>>>>> ba952dcbdd78676a50dccb02e812364ab08b49e7
}