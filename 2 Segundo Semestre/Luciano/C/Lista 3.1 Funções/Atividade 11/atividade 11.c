#include <stdio.h>
#include "mes.h"

int main (){

    int mes;

    printf("digite o mes para saber o nome: \n");
    scanf("%i", & mes);

    mostrarmes(mes);
}