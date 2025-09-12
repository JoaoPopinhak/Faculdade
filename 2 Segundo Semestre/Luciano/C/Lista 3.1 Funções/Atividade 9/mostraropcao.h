#include <stdio.h>
#include "imposto.h"
#include "novosal.h"
#include "classificacao.h"

void mostraropcao(){
    int opcao;

    printf("Menu de opcoes:\n1. Imposto\n2. Novo salario\n3. Classificacao\n0. Encerrar\nDigite a opcao desejada.\n");
    scanf("%i", &opcao);

    while (opcao != 0){

        switch (opcao){

        case 1:
        printf("O valor do imposto e: %.2f\n", imposto());
        break;

        case 2:
        printf("O valor do seu novo salario e: %.2f\n", novosal());
        break;

        case 3:
        classificao();
        break;
        }

        printf("Menu de opcoes:\n1. Imposto\n2. Novo salario\n3. Classificacao\n0. Encerrar\nDigite a opcao desejada.\n");
        scanf("%i", &opcao);
    }
}