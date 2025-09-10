#include <stdio.h>
#include "funcao3.h"

int main (){
    int num1, num2, diferenca;

    printf("Digite o valor de num1:  ");
    scanf("%i", & num1);

    printf("Digite o valor de num2:  ");
    scanf("%i", & num2);

    diferenca = somaentreles(num1, num2);

    printf("O valor da soma da diferenca entre o numero %i e o numero %i e: %i", num1, num2, diferenca);
}