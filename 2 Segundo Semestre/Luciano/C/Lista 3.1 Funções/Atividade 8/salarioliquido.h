#include <stdio.h>

float salarioliquido(float salariobruto, float valorimposto){

    float salarioliquido;

    salarioliquido = salariobruto - valorimposto;

    return salarioliquido;
}