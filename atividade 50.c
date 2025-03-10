#include <stdio.h> 
int main () {
    float salariomin, salario, calculo;
    salariomin = 1509.00;
    printf("Digite o seu salaario: ");
    scanf("%f", & salario);
    
    calculo = salario / salariomin;
    printf("O seu salario equivale a %f salarios minimos", calculo);

}