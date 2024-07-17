#include <stdio.h>


int main(){

int num = 0;

scanf("%d", &num);

if ( num % 3 == 0 ){
    printf( "É divisivel por 3");
    
}else if ( num % 5 == 0){
    printf("É divisível por 5");
    

}else{
    printf("Não é divisível nem por 5 nem por 3.");
}








    return 0 ;
}