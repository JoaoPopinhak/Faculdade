#include <stdio.h>
#include "valorhora.h"
#include "salariobruto.h"
#include "valorimposto.h"
#include "salarioliquido.h" 

int main (){
    float salariobase, horastrabalhadas;

    printf("Digite o valor do seu salario base: ");
    scanf("%f", & salariobase);

    printf("Digite suas horas trabalhadas: ");
    scanf("%f", & horastrabalhadas);

    printf("O salario bruto: %.2f", salarioliquido(salariobruto(horastrabalhadas, valorhora(salariobase)),valorimposto(salariobruto(horastrabalhadas, valorhora(salariobase)))));
}