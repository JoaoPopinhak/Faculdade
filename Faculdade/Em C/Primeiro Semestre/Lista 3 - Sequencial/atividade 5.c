#include <stdio.h>
int main (){
    float valorprod,descont;
    printf("Digite o valor do prdouto:  ");
    scanf("%f", & valorprod);
    printf("Digite o valor em porcentagem do desconto que deseja aplicar:  ");
    scanf("%f", & descont);

    descont =  descont / 100 * valorprod;
    valorprod = valorprod - descont;

    printf("O novo valor do produto ficou em:  %f", valorprod);
    
}