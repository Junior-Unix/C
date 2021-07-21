#include <stdio.h>
#include <stdlib.h>


int main(){


            long int num1, num2;
            num1 = num2 =  0 ;
            

            printf("Primeiro número:\n\n");
            scanf("%d", &num1);
            printf("Segundo numero:\n\n");
            scanf("%d", &num2);
            
            int dif, dif2, dif3;
            dif = num1 - num2;
            dif2 = num2 + num1;
            dif3 = num1 + num2;
            
            
            
            if(( num1 >= 0 ) && ( num1 >= num2 )){
                
                printf("%d é maior que %d, e a diferença é %d.\n\n", num1, num2, dif);
            }else{
                if(( num1 <= 0) && ( num2 >= 0)){
                    printf("%d é maior que %d, e a diferença é %d.\n\n", num2, num1, dif2);
                }else{
                    
                    
                    if((num1 >= 0) && ( num2 <= 0)){
                        printf("%d é maior que %d, e a diferença é %d\n\n", num2, num1, dif3);
                    
                    
                    }else{
                        if(( num2 < 0 ) && ( num1 < 0 )){
                            
                            printf("%d é maior que %d, e a diferença é: %d\n\n", num1, num2, dif3);
                        }else{
                             if ( num1 == num2) {
                            printf("Os numeros digitados são iguais%d e %d\n\n", num1, num2);
                        }else{
                            printf("Os numeros digitados são esses %d e %d\n\n", num1, num2);
                        }}
                    }
                }
            }




    return 0 ;
}