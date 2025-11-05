#include <stdio.h>

void maiorVezes(int vetor1[], int tamanhoV ,int *maior, int *repeticoes){
    *maior = -1;
    *repeticoes = 0;
    for(int i = 0; i < tamanhoV; i++){
        if(vetor1[i] > *maior){
            *maior = vetor1[i];
            *repeticoes = 1;
        }else if(vetor1[i] == *maior){
            (*repeticoes)++;
        }
    }
}

int main(){
    int vetor[5], tamanhoV = 5, maior, repeticoes;

    for(int i = 0; i < tamanhoV; i++){
        printf("Digite o valor para armazenar na posicao[%i]: ",i);
        scanf("%i", &vetor[i]);
    }

    maiorVezes(vetor, tamanhoV, &maior, &repeticoes);

    printf("O numero %i repetiu %i vezes",maior, repeticoes);
}