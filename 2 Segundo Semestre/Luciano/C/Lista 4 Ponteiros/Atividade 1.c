#include <stdio.h>

void MediaMaiorMenor(float notas[], float *media, float *notaM, float *notam){

    for(int i = 0; i < 3; i++){

        if(notas[i] > *notaM){
            *notaM= notas[i];
        }else if(notas[i] < *notam){
            *notam = notas[i];
        }

        *media = *media + notas[i];
    }

    *media = *media /3;
}

int main(){

    float notas[3], media = 0, notaMaior = -1, notaMenor = 9999;

    for (int i = 0; i < sizeof(notas)/sizeof(notas[0]); i++){
        printf("Digite a nota do aluno\n");
        scanf("%f", &notas[i]);
    }

    MediaMaiorMenor(notas, &media, &notaMaior, &notaMenor);

    printf("media = %.2f\n nota Maior = %.2f\n nota Menor = %.2f", media, notaMaior, notaMenor);

}