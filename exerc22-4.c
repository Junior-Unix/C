<<<<<<< HEAD
#include <stdio.h>

int main(){


int idade, tempoServ;
printf(" QUal sua idade?\n");
scanf("%i", &idade);
printf("qual o tempo de serviço?");
scanf("%i", &tempoServ);
idade = 0;

if((idade > 65) || ( tempoServ >= 30 )){
    printf("Tẽm direito para aposentar ainda\n");
}else if(( idade == 60 ) && ( tempoServ >= 25)){
    printf("Tem direito a aposentadoria.\n");

}else{
    printf("Têm direito a aposentadiria.\n");
}





    return 0 ;
=======
#include <stdio.h>

int main(){


int idade, tempoServ;
printf(" QUal sua idade?\n");
scanf("%i", &idade);
printf("qual o tempo de serviço?");
scanf("%i", &tempoServ);
idade = 0;

if((idade > 65) || ( tempoServ >= 30 )){
    printf("Tẽm direito para aposentar ainda\n");
}else if(( idade == 60 ) && ( tempoServ >= 25)){
    printf("Tem direito a aposentadoria.\n");

}else{
    printf("Têm direito a aposentadiria.\n");
}





    return 0 ;
>>>>>>> ba952dcbdd78676a50dccb02e812364ab08b49e7
}