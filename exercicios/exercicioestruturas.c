#include <stdio.h>
int main(){

float temperatura, umidade;

unsigned int estoque, estoqueminimo;
estoqueminimo = 1000;

printf("Entre com a temperatura: \n");
scanf("%f", &temperatura);

printf("Entre com a umidade: \n");
scanf("%f", &umidade);

printf("Entre com o estoque: \n");
scanf("%u", &estoque);

if(temperatura > 30){
    printf("Temperatura esta alta. \n");
}else{
    printf("Temperatura dentro dos parametros. \n");
}
if(umidade > 50){
    printf("Umidade elevada. \n");
}else{
    printf("Temperatura dentro dos parametros. \n");
}
if(estoque < estoqueminimo){
    printf("Estoque abaixo do minimo! \n");
}else{
    printf("estoque normal. \n");
}
}