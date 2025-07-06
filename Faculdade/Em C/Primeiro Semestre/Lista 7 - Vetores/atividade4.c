#include <stdio.h>
int main (){
    int A [5], B[5], soma[5];

    printf("Digite numeros inteiros do vetor A\n");
    for (int i=0; i<5; i++){
        printf("Digite um numero inteiro\n");
        scanf("%i", & A[i]);
    }

    printf("Digite numeros inteiros do vetor B");
    for (int i=0; i<5; i++){
        printf("Digite um numero inteiro\n");
        scanf("%i", & B[i]);
    }

    for(int i=0; i<5; i++){
        soma[i]=A[i]+B[i];
    }

    printf("Imprimindo os vetores A\n");
    for(int i=0; i<5; i++){
        printf("%i\n", A[i]);
    }

    printf("Imprimindo os vetores B\n");
    for(int i=0; i<5; i++){
        printf("%i\n", B[i]);
    }

    printf("Imprimindo somas de cada vetor\n");
    for(int i=0; i<5; i++){
        printf("%i\n", soma[i]);
    }


}