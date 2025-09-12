#include <stdio.h>
#include "SalarioLiquido.h"

int main (){
    float salariobruto;

    printf("Digite o salario bruto: ");
    scanf("%f", & salariobruto);

    printf("O salario liquido e: %.2f", salarioliquido(salariobruto));
}