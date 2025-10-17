#include <stdio.h>

void expressaoAlgebrica(float *x,float *y,float *resultado){
    *resultado=(*x * 2) - *y + 10;

}


int main(){
    float x, y, resultado;

    printf("Digite o valor de 'X': ");
    scanf("%f", & x);

    printf("Digite o valor de 'Y': ");
    scanf("%f", & y);

    expressaoAlgebrica(&x,&y, &resultado);

    printf("O resultado e: %f", & resultado);

}