#include <stdio.h>
#include "novosal.h"

int main(){
float salario;

    printf("Digite o seu salario: ");
    scanf("%f", & salario);

    printf("O novo salario e: %.2f", novosal(salario));
}