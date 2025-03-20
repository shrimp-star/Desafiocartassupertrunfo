#include <stdio.h> 

int main () {
int idade, matricula;
float altura;
char nome[50];

printf("Digite sua idade: \n");
scanf("%d", &idade);

printf("Digite sua altura: \n");
scanf("%f", &altura);

printf("Digite seu nome: \n");
scanf("%s", &nome);

printf("Digite sua matricula: \n");
scanf("%d", &matricula);

printf("Nome: %s - Matricula: %d \n", nome, matricula);
printf("Altura: %f Idade: %d", altura, idade);

return 0;

}