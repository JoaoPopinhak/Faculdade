#include <stdio.h>
#include "funcao 4.h"

int main(){

    int num1, num2, num3;
    int resultado;

    printf("Digite os valores de A,B e C\n");

    scanf("%i", &num1);
    scanf("%i", &num2);
    scanf("%i", &num3);

    resultado = funcao4(num1,num2,num3);

    printf("%i", resultado);
}