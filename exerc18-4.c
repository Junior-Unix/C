#include <stdio.h>

int main(){

float num1, num2;

scanf("%f", &num1);
scanf("%f", &num2);


printf("\n\tSoma\t'+':\n\tsubtração\t'-':\n\tDivisão\t'/':\n\tMultiplicação\t'*'\n");

char op;
op = getchar();
scanf("%c", &op);
float res;
switch(op){
    // float res = 0 ;
    
    case '+': res = num1 + num2;
    break;
    case '-': if(num1 < num2){
        res = num1 - num2;
    }else{
        res = num2 - num1; 
        }
        // res = num1 - num2;
        break;
    
    case '/': res = num1 / num2;
    break;
    case '*': res = num1 * num2;
    break;
    default : printf("Operação inválida.");
    // break;
    }



printf("%f\n%f\n%f\n", num1,num2,res);



    return 0 ;
}