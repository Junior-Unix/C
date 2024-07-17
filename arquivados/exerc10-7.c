/* Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor,
calcule e imprima a média geral. */
#include <stdio.h>

int main(void){

float vetor[15];
float nota = 0;
float soma = 0;
int divi = 0;
system("cls");
for( int i = 1; i < 70; i++)
    putchar('=');
    putchar('\n');



printf("Informe 15 notas, por gentileza( use PONTO para numeros fracionarios. ).:\n");
    for( int i = 0; i < 15; i++ ){
        scanf("%f", &nota );
            if( nota > 0 && nota < 10 ){
                soma = soma + nota;
                vetor[i] = nota;
                divi++;
            }else{
                i--;
            }
    }  

system("cls"); 

for( int i = 1; i < 70; i++)
    putchar('=');
    putchar('\n');     

    for( int i = 0; i < 15; i++ ){
        printf("nota aluno[%i]~[%.1f]\n", i + 1, vetor[i]);
    }

printf("A soma das notas dos %d alunos, eh: [%.1f];\nA media geral, eh.: [%.1f]\n", divi, soma, soma / divi);
for( int i = 0; i < 70; i++ )
    putchar('=');
    putchar('\n');

    return 0 ;
}