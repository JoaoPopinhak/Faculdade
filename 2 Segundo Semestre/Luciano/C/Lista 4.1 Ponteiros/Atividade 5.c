#include <stdio.h>

int inverteVetor(int vetor1[], int vetor2[], int tamanhoV){
    int maior = 0;
    for(int i = 0; i < tamanhoV; i++){
        if(vetor1[i] > maior){
            maior=vetor1[i];
        }
        vetor2[i] = vetor1[tamanhoV - 1 - i];
    }
    return maior;
}

int main(){
    int vetor1[5], vetor2[5], tamanhoV = 5, maior;

    for(int i = 0; i < tamanhoV; i++){
        printf("Digite o valor para armazenar na posicao[%i]\n", i);
        scanf("%i", &vetor1[i]);
    }

    maior = inverteVetor(vetor1, vetor2, tamanhoV);

    printf("Abaixo os valores armazenados no vetor 2\n");
    for(int i = 0; i < tamanhoV; i++){
        printf("Posicao[%i] = %i\n", i, vetor2[i]);
    }
    printf("O maior numero do vetor 1 e: %i", maior);

}