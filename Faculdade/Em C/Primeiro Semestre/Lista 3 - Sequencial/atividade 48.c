#include <stdio.h>
int main () {
    float horas, valorhora, salariobrut, salarioliq;
    valorhora = 0.125 * 1509.00;

    printf("Digite suas horas trabalhadas: ");
    scanf("%f", & horas);

    salariobrut = horas * valorhora;
    salarioliq = salariobrut - ((3.0 / 100) * salariobrut);


    printf("O seu salario liquido e: %f", salarioliq);

}