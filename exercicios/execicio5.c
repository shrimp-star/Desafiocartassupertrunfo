#include <stdio.h>

int main(){

    char letra;
    
    printf("Entre com uma letra manuscula:\n");
    scanf("%c", &letra);

    letra = letra + ( 'A' - 'a');

    printf("Caractere = %c \n", letra);

    return 0;






}