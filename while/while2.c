#include <stdio.h>
int main(){

int numero;

do{

    printf("Digite um numero par para sair:\n");
    scanf("%d", &numero);

    if(numero %2 == 0){
        printf("%d é par.\n", numero);
    }else{
        printf("%d é impar!\n", numero);
    }

}while(numero %2 !=0);

printf("saindo do programa...");

    return 0;
}