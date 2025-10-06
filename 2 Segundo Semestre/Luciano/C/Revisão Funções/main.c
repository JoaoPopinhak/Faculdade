#include <stdio.h>
#include "CalcularM.h"
int main()
{

    float nota[5][3];
    float mediaA;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite a nota: [%i][%i]", i, j);
            scanf("%f", &nota[i][j]);
        }
        printf("prox\n");
    }

    mediaA = calcularMedia(nota);

    printf("%.2f", mediaA);
}