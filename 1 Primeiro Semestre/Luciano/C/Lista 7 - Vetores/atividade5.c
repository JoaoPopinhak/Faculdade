#include <stdio.h>
int main (){
    int A [5], T[5];

    printf("Digite numeros inteiros do vetor A\n");
    for (int i=0; i<5; i++){
        printf("Digite um numero inteiro\n");
        scanf("%i", & A[i]);
    }

    printf("Digite numeros inteiros do vetor T\n");
    for (int i=0; i<5; i++){
        T[i] = A[i] * 3;
    }

    for(int i=0; i<5; i++){
        printf("Os valores triplicado sao %i\n" , T[i]);
    }
}