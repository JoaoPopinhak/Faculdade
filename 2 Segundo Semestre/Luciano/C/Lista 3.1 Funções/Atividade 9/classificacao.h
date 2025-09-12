#include <stdio.h>

void classificao(){
    float salario;

    printf("Digite o seu salario: ");
    scanf("%f", & salario);

    if(salario <= 700.0){
        printf("Mal remunerado\n");
    }else{
        printf("Bem remunerado\n");
    }
    
}