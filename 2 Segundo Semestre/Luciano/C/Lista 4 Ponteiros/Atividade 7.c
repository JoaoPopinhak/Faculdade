#include <stdio.h> 
#include <math.h>

void calcularEsfera (float r, float *area, float *volume){
    *area = 4 * 3.14159 * pow(r, 2);
    *volume = 4.0/3.0 * 3.14159 * pow(r,3);
}

int main(){
    float area, volume, raio;

    printf("Digite o valor do raio");
    scanf("%f", & raio);

    calcularEsfera(raio, &area, &volume);

    printf("A area da esfera e: %f", area);
    printf("O volume da esfera e: %f", volume);

}