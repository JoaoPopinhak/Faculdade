#include <stdio.h>
int main (){
    float somapar, somaimpar,percentualpar, percentualimpar;

    for(int i = 85; i <= 906; i++){
        if(i % 2 == 0){
            printf("Par: %i\n", i);
            somapar = somapar + i;
        }else{
            printf("Impar: %i\n", i);
            somaimpar = somaimpar + i;
        }
    }
    percentualpar = (somapar / (somapar + somaimpar)) * 100;
    percentualimpar = (somaimpar / (somapar + somaimpar)) * 100;
    printf("Soma dos pares: %.2f\nSoma dos impares: %.2f\n Percentual de pares: %.2f\nPercentual de impares: %.2f", somapar, somaimpar, percentualpar, percentualimpar);
}