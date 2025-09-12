#include <stdio.h>
#include "ajustesal.h"

int main (){
    float salario;

    printf("Digite o valor do seu salario: ");
    scanf("%f", & salario);

    ajustesal(salario);
}