#include <stdio.h>

int main(){

//informações da carta 1:

char estado1[50];

char Ncarta1[8];

char cidade1[50];

int populacao1;

float area1;

float PIB1;

int pontosturisticos1;

// informações da carta 2
char estado2[50];

char Ncarta2[8];

char cidade2[50];

int populacao2;

float area2;

float PIB2;

int pontosturisticos2;

printf("      Super trunfo      \n");
printf("Vamos cadastrar a primeira carta!\n");

printf("Carta 1\n");
printf("Digite a abaixo as inromações que deseja para a primeira carta:\n");

// cadastrar informações da primeira carta:

printf("Digite o nome do Estado:");
scanf("%s", estado1);

printf("Digite o nome da cidade:");
scanf("%s", cidade1);

printf("crie um número para a carta:");
scanf("%d", &Ncarta1);

printf("População:");
scanf("%d", &populacao1);

printf("Área da cidade:");
scanf("%f", &area1);

printf("PIB:");
scanf("%f", &PIB1);

printf("Pontos Turísticos:");
scanf("%d", &pontosturisticos1);


// impressão das informações da primeira carta:

printf("   Carta 1    \n");
printf("informações cadastradas:\n");

printf("Estado: %s\nCidade: %s \n", estado1, cidade1 );

printf("População: %d \n", populacao1);

printf("Área: %2.f km2 \n", area1);

printf("PIB: %f\n", PIB1);

printf("Pontos Turìsticos: %d\n", pontosturisticos1);

// infomações da segunda carta:
// cadastrar informações da segunda carta:
printf("Agora vamos para a segunda carta!\n");
printf("Carta 2\n");
printf("Digite a seguir as inromações que deseja para a segunda carta:\n");

printf("Digite o nome do Estado:");
scanf("%s", estado2);

printf("Digite o nome da cidade:");
scanf("%s", cidade2);

printf("crie um número para a carta:");
scanf("%d", &Ncarta2);

printf("População:");
scanf("%d", &populacao2);

printf("Área da cidade:");
scanf("%f", &area2);

printf("PIB:");
scanf("%f", &PIB2);

printf("Pontos Turísticos:");
scanf("%d", &pontosturisticos2);


// impressão das informações da segunda carta:

printf("    Carta 2    \n");
printf("informações cadastradas:\n");

printf("Estado: %s\nCidade: %s \n", estado2, cidade2 );

printf("População: %d \n", populacao2);

printf("Área: %2.f km2 \n", area2);

printf("PIB: %f \n", PIB2);

printf("Pontos Turìsticos: %d\n", pontosturisticos2);

//comparção do PIB per capita:

int resultadoA;

int resultadoB;

resultadoA = PIB1 / populacao1;

resultadoB = PIB2 / populacao2;


if(resultadoA > resultadoB){
                          // exibir :
    printf("   A carta 1 venceu!  \n");
    printf("A carta 1 tem o maior PIB per capita: %d\n", resultadoA);
    
}else {
    printf("   A carta 2 venceu!  \n");
    printf("A carta 2 tem o maior PIB per capita: %d\n", resultadoB);
}




    return 0;


}