#include <stdio.h>
#include "funcao6.h"

int main (){
    float num1, num2;

    printf("Digite o numero 1: ");
    scanf("%f", & num1);

    printf("Digite o numero 2: ");
    scanf("%f", & num2);

    printf("O resultado e: %.2f",  funcao5(num1,num2));

}