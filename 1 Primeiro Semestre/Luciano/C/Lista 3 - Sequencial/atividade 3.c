#include <stdio.h> 
int main () {
int n1,n2,resultado;
    printf("Digite o primeiro numero");
    scanf("%d", & n1);

    printf("Digite o segundo numero");
    scanf("%d", & n2);

        if (n2 > 0){
            resultado = n1 / n2;
        }else{
            printf("operacao invalida! Nao e possivel dividir por zero, tente novamente");            
        }

    printf("O resultado da divisao e: %d", resultado);
}