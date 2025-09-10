#include <stdio.h>
#include "funcao 2.h"

int main(){
    int num, resultado;

    printf("Digite o numero para identificarmos se e impar[0] ou par[1]");
    scanf("%i", & num);

    resultado = parimpar(num);

    printf("O resultado e 1 para PAR 0 para IMPAR: %i", resultado);
}