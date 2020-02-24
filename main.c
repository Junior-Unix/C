//
//  main.c
//  box
//
//  Created by Son on 17.02.20.
//  Copyright © 2020 Son. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float num1, num2, div;
    
    printf ("\n\t Teste de divisao.\n");
 
    printf("\nPor gentileza, digite o numero a ser dividido\n:");
    scanf("%f", &num1);
    printf("\nAgora o divisor\n:");
    scanf("%f", &num2);
    
    div = num1 / num2;
    
    printf("\nEis o resultado da divisao de %f por %f.\n:", num1, num2);
    printf("%f\n", div);
    
    return 0;
    
}
