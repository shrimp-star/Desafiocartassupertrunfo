#include <stdio.h>
int main(){

int numero, i;

printf("Digite um número para calcularmos a tabúada:\n");
    scanf("%d", &numero);

for(int i = 0; i <= 10; i++)
{

    printf("%d x %d = %d\n", i, numero, i *  numero);


}


    return 0;


}