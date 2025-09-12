#include <stdio.h>

float imposto (){
    float imposto, salario;

    printf("Digite o seu salario: ");
    scanf("%f", & salario);

    if(salario < 500.0){
        imposto = salario * (5.0/100.0);
        return imposto;
    }else if (salario < 850.0){
        imposto = salario * (10.0/100.0);
        return imposto;
    }else{
        imposto = salario * (15.0/100.0);
        return imposto;
    }
}