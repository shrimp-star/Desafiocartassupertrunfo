#include <stdio.h>

int main(){

// declaração das variáveis (peças):

int torre, bispo, rainha;

    torre = 1;
    bispo = 0;
    rainha = 1;

    //introdução ao jogo:

printf("Iniciando o jogo xadrez... \n");


    // texto explicativo da movimentação da torre :

printf("A torre irá movimentar-se 5 (cinco) casas à direita!\n");


   // Uso do for para a movimentação da torre:

    for(torre; torre <=5; torre++)
    {
        printf("Direita(%d)\n", torre);    // codigo

    }
    
   // texto explicativo da movimentação do bispo:

    printf("O bispo irá movimentar-se 5 (cinco) casas em diagonal à direita!\n");


   // Uso do while para a movimentação do bispo:

    while(bispo < 5 ){
        bispo++;
        printf("Cima/Direita(%d)\n", bispo);  //codigo
        
        }

 
    // Texto explicativo da movimentação da rainha:

  printf("A rainha irá movimentar-se 8 (oito) casas à esquerda!\n");


   // Uso do do-while para a movimentação da rainha:

do{
    printf("Esquerda(%d)\n", rainha);     //codigo
    rainha++;
}while (rainha < 9);


 // printf para demonstrar que o jogo encerrou:

printf("Fim de jogo.\n");
    


        return 0;
    
}