#include <stdio.h>

float mediaponderada(){

    float nota, peso, resultado = 0, somanotapeso = 0, somapeso = 0;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    while (nota != 00){

        printf("Digite o peso dessa nota: ");
        scanf("%f", & peso);

        somanotapeso = somanotapeso + (nota * peso);
        somapeso = somapeso + peso;

        resultado = somanotapeso / somapeso;

        printf("Digite a nota do aluno. Para encerrar digite 00: ");
        scanf("%f", &nota);
    }

    return resultado;

}