#include <stdio.h>

float valorimposto(float salariobruto){
    float valorimposto;

    valorimposto = salariobruto * (7.55/100.0);

    return valorimposto;
}