#include <stdio.h>
int main (){
    int A [5];
    for (int i=0; i<5; i++){
        printf("Digite um numero inteiro");
        scanf("%i", & A[i]);
    }

    printf("Imprimindo em ordem: \n");

    for (int i=0; i<5; i++){
        printf("%i\n", A[i]);
    }

    printf("Imprimindo em ordem inversa: \n");

    for(int i=4; i>=0; i--){
        printf("%i\n",  A[i]);
    }
}