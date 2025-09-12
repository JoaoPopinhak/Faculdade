#include <stdio.h>
#include "sjustesal.h"

void ajustesal (float salario){

    if(salario < 500){
        salario = salario + salario * 30/100;
        printf("Seu novo salario e: %.2f", salario);
    }else{
        semajuste();
    }
}

