#include <stdio.h>
int main (){
    float num, soma = 0, media = 0, maior = 0, menor = 0;
    for(int i =1; i <=5; i++){
        printf("Digite um numero");
        scanf("%f", & num);

        if (num > maior) {
            maior = num;
        } else {
            menor = num;
        }
        soma = soma + num;
        media = soma / i;    
    }
    printf("%.0f, %.0f, %.2f, %.2f", maior, menor, soma, media);
}
