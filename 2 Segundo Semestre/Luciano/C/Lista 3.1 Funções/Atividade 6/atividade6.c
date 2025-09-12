#include <stdio.h>
#include "valorescarro.h"

int main (){
    float precofabrica, percentlucro, percentimposto;

    printf("Digite o valor do preco de fabrica do carro: ");
    scanf("%f", & precofabrica);

    printf("Digite o percentual de lucro: ");
    scanf("%f", & percentlucro);

    printf("Digite o percentual de imposto: ");
    scanf("%f", & percentimposto);

    printf("O valor total do carro: %.2f", valorescarro(precofabrica, percentlucro, percentimposto));
}
