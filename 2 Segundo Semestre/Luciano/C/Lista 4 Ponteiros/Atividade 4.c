#include <stdio.h>

void calcularAumento (float *salario, float *aumento){
    if(*salario <= 500){
        *aumento = 0.05 * *salario;
        *salario += *aumento;
    }else if(*salario < 1200){
        *aumento = 0.12 * *salario;
        *salario += *aumento;
    }else{
        *aumento = 0;
    }
}

int main(){
    float salario, aumento;

    printf("Digite o valor do seu salario: ");
    scanf("%f", & salario);

    calcularAumento(&salario,&aumento);

    printf("Seu novo salario e %.2f voce recebeu um aumento de %.2f", salario, aumento);

}