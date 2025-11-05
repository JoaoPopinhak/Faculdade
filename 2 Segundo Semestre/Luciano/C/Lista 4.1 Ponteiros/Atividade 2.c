#include <stdio.h>

void maximoMinimo(int *V, int N, int *maximo, int *minimo){
    
        for(int i = 0; i < N; i++){
        if(V[i] > *maximo){
            *maximo = V[i];
        }else if(V[i] < *minimo){
            *minimo = V[i];
        }
    
    }

}




int main(){

    int vetor[5],maximo=-1, minimo = 100;

    for(int i = 0; i < 5; i++){
        printf("Digite o valor para guardar no vetor: \n");
        scanf("%i", &vetor[i]);
    }
    
    maximoMinimo(vetor,5,&maximo, &minimo);
    
    printf("O maximo e: %i\nO minimo e: %i", maximo, minimo);

}