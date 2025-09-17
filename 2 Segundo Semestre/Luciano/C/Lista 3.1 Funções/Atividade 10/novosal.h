#include <stdio.h>

float novosal (float salario){
    float novosal;

    if(salario <= 500.0){
        novosal= salario + (salario * (5.0/100.0));
    }else if(salario <= 1200.0){
        novosal= salario + (salario * (12.0/100.0));
    }else{
        novosal = salario;
    }

    if(salario <=600){
        novosal = novosal + 150.0;
        return novosal;
    }else{
        novosal = novosal + 100;
        return novosal;
    }

}