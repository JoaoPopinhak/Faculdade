#include <stdio.h>

void cubo (double numero, double *result){
    *result = numero * numero * numero;
}


int main(){
    double numero, result;
    printf("Digite um numero para encontrar o cubo");
    scanf("%lf", & numero);
    cubo(numero, &result);
    printf("%.2f", result);
}