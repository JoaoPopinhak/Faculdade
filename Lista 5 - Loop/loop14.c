#include <stdio.h>
int main () {
    int num, soma=0;

    printf("Digite um numero:");
    scanf("%i", & num);

    for(int i =0; i <= num; i++){

        soma = soma + i;
        printf("Saida: %i\n", i);
    }
    printf("Soma: %i", soma);
}