#include <stdio.h>
int main (){
    int num[7];
    for(int i=0; i<6; i++){
        printf("Digite um numero inteiro  ");
        scanf("%i", & num[i]);
    }

    for(int i=0; i<6; i++){
        printf("O numero digitado e: %i\n", num[i]);
    }
}