#include <stdio.h>
int main () {

    float salario, vendastotal;

    printf("Digite seu salario fixo: ");
    scanf("%f", & salario);
    printf("Digite o valor de suas vendas totais: ");
    scanf("%f", & vendastotal);
    
    vendastotal = (4.0 / 100) * vendastotal;
    salario = salario + vendastotal;
    printf("%f", salario);
    
}