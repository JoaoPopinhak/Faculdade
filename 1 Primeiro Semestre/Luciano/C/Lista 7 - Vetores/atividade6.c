#include <stdio.h>
int main (){
    int X[10], menor=99999, maior=-99999, Mpx, mpx;

    for(int i=0; i<10; i++){
        printf("Digite o numero inteiro\n");
        scanf("%i", & X[i]);

        if(X[i] > maior){
            maior= X[i];
            Mpx=i;
        }
        if(X[i] < menor){
            menor=X[i];
            mpx=i;
        }
    }

    printf("A diferenca entre o maior e o menor e: %i\nA posicao do maior numero no array e: %i\nA posicao do menor numero no array e: %i", maior-menor, Mpx, mpx);



}