#include <stdio.h>

float valorescarro (float valorcarro, float percentlucro, float percentimposto){

    float lucro, imposto, valortotal;

    lucro = valorcarro * (percentlucro / 100);
    imposto = valorcarro * (percentimposto / 100);
    valortotal = valorcarro + lucro + imposto;

    printf("O valor correspondente ao lucro do distribuidor: %.2f\nO valor correspondente aos impostos: %.2f\n", lucro, imposto);

    return valortotal;
}