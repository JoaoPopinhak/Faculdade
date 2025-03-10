#include <stdio.h> 
int main(){
    int n1,n2,resultado;
    printf("Digite o primeiro numero");
    scanf("%d", & n1);

    printf("Digite o segundo numero");
    scanf("%d", & n2);

    resultado = (n1 + n2) / 2;
    
    printf("O resultado da media de duas notas e: %d", resultado);
}