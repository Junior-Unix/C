/*Realize a leitura dos salários pagos a um indivíduo
durante um ano. Em seguida, o programa deverá mostrar
os valores mensais e o total anual*/

#include <stdio.h>

void inserirSalario(float salario[12]);
char imprimirSalarioAnual(float salario[12]);
char insereImprime(float salario[12]);

int main(int){
    float salario[12]; /*12 meses**/

    // inserirSalario(salario); 
    // imprimirSalarioAnual(salario);
    insereImprime(salario);



    return 0;
}

// void inserirSalario(float salario[12]){
//     int i;
//     for(i=0; i<12; i++){
//         printf("Insira o salário do mês %d:", i+1);
//         scanf("%f", &salario[i]);
//     }
// }

// /*Mostrar os valores mensais e calcular o total*/
// char imprimirSalarioAnual(float salario[12]){

//     float total;
//     int i;

//     puts("Mês Valor ");
//     for(i=0, total=0.0; i<12; i++){
//     printf("%3d %9.2f\n", i+1, salario[i]);
//     total+=salario[i];
//     }

//     printf("Total anual: %9.2f\n", total);

// }

char insereImprime(float salario[12]){

        void inserirSalario(float salario[12]){
        int i;
        for(i=0; i<12; i++){
            printf("Insira o salário do mês %d:", i+1);
            scanf("%f", &salario[i]);
        }
    }

    /*Mostrar os valores mensais e calcular o total*/
    char imprimirSalarioAnual(float salario[12]){

        float total;
        int i;

        puts("Mês Valor ");
        for(i=0, total=0.0; i<12; i++){
        printf("%3d %9.2f\n", i+1, salario[i]);
        total+=salario[i];
        }

        printf("Total anual: %9.2f\n", total);

    }
}