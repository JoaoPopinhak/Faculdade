#include <stdio.h>
#include "funcao1.h"


int main(){
    int num;

    printf("Digite um numero para verificar se e impar ou par:  ");
    scanf("%i", & num);

    imparpar(num);
}