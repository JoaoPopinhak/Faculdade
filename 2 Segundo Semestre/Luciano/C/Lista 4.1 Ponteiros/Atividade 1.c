#include <stdio.h>


void calcula(int *numX, int *numY){
    *numX = *numX + *numY;
    *numY = *numX - *numY;
}


int main(){
    int numX, numY;

    printf("Digite o valor de X: ");
    scanf("%i", & numX);

    printf("Digite o valor de Y: ");
    scanf("%i", & numY);

    calcula(&numX, &numY);

    printf("O novo valor de X e: %i\nO novo valor de Y e: %i", numX, numY);

}