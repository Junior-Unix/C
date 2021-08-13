<<<<<<< HEAD
#include <stdio.h>

int main(){
        
        char opcao;
        printf("Selecione S para 12 %%, C para 30 a 40 %% ou  ENTER para quit:\n\n");
        scanf("%c", &opcao);
        
        if (( opcao == 's') || ( opcao == 'S' )){
        
            float valor;
            printf("Digite uma valor.\n");
            scanf("%f", &valor);

            	float porcent = ( valor * 1.12);

        	printf("O valor acrescido de 12%% é: %.2f\n\n", porcent);

        }else if (( opcao == 'c' ) || ( opcao == 'C')){
            
		float valor;
//		float porcent;		
		
		printf("Digite o valor\n\n");
		scanf("%f", &valor);
		valor = valor > 9 ? valor * 1.30 : valor*1.40;
		printf("%.2f\n\n", valor);

        
        
        }else{      
        
		printf("Quiting...\n\n");

        }



    return 0 ;
}
=======
#include <stdio.h>

int main(){
        
        char opcao;
        printf("Selecione S para 12 %%, C para 30 a 40 %% ou  ENTER para quit:\n\n");
        scanf("%c", &opcao);
        
        if (( opcao == 's') || ( opcao == 'S' )){
        
            float valor;
            printf("Digite uma valor.\n");
            scanf("%f", &valor);

            	float porcent = ( valor * 1.12);

        	printf("O valor acrescido de 12%% é: %.2f\n\n", porcent);

        }else if (( opcao == 'c' ) || ( opcao == 'C')){
            
		float valor;
//		float porcent;		
		
		printf("Digite o valor\n\n");
		scanf("%f", &valor);
		valor = valor > 9 ? valor * 1.30 : valor*1.40;
		printf("%.2f\n\n", valor);

        
        
        }else{      
        
		printf("Quiting...\n\n");

        }



    return 0 ;
}
>>>>>>> ba952dcbdd78676a50dccb02e812364ab08b49e7
