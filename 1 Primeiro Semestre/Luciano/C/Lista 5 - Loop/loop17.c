#include <stdio.h>
int main() {
    float inf, soma = 0, media =0, maior = 0, menor = 0, impar, par, percentuali;
    int num = 0;

    printf("Digite a quantidade de numeros a serem lidos ");
    scanf("%f", & inf);
    for(int i = 1; i <= inf; i++){

        printf("Digite um numero: ");
        scanf("%i", & num);

        if (num > maior){
            maior = num;
        } else {
            menor = num;
        }
        if(num % 2 != 0){
            impar++;
        } else {
            par++;
        }

        soma = soma + num;
        media = soma / i; 
        percentuali = (impar / inf) * 100;

    }

    printf("Soma dos numeros informados: %.0f\nA quantidade de numeros informados: %.0f\nA media dos numeros informados: %.2f\nO maior numero informado: %.0f\nO menor numero informado: %.0f\nO percentual de numeros impares informados: %.2f", soma, inf, media, maior, menor, percentuali);
}