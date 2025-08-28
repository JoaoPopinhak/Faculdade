#include <stdio.h>
int main () {
    int A[5], maior=-99999, menor=99999;
    float media;

    for (int i=0; i<5; i++){
        printf("Digite o numero inteiro: ");
        scanf("%i", & A[i]);

        if(A[i] > maior){
            maior = A[i];
        }
        if(A[i] < menor){
            menor = A[i];
        }
        media = media + A[i];
    }

    for(int i=0; i<5; i++){
        printf("Os numeros em ordem sao: %i\n", A[i]);
    }

    printf("O maior numero: %i\nO menor numero: %i\nE a media dos numeros informados%.0f",maior, menor, media/5);
    
}