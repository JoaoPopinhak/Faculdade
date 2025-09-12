#include <stdio.h>

float novosal (){
    float novosal, salario;

    printf("Digite o seu salario: ");
    scanf("%f", & salario);

    if(salario < 450.0){
        novosal = salario + 100.0;
        return novosal;
    }else if (salario <= 749.99){
        novosal = salario + 75.0;
        return novosal;
    }else if(salario <= 1499.99){
        novosal = salario + 50.0;
        return novosal;
    }else{
        novosal = salario + 25.0;
        return novosal; 
    }
}