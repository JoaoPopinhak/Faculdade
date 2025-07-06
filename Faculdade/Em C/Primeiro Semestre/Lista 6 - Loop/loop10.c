#include <stdio.h>
int main (){

    int time, bairro, crici=0, prosp=0, outros=0, outroscenter=0;
    float sal, mediasal=0;
    printf("Informe o seu time: \n1 - Para Criciuma \n2 - Para Prospera \n3 - Para Outros \n0 - Para encerrar \n");
    scanf("%i", & time);

    while (time != 0 ){

        printf("Informe qual bairro voce mora: \n1 - Para Pinheirinho \n2 - Para Centro \n3 - Para Outros \n");
        scanf("%i", & bairro);

        printf("Informe o seu salario: \n");
        scanf("%f", & sal);

        if(time==1){
            crici++;
        }else if (time==2){
            prosp++;
            mediasal = (mediasal + sal) / prosp;
        }else if (time==3){
            outros++;
            if(bairro==2){
                outroscenter++;
            }
        }else{
            printf("Time invalido");
        }

        printf("Informe o seu time\n1 - Para Criciuma\n2 - Para Prospera\n3 - Para Outros\n0 - Para encerrar\n");
        scanf("%i", & time);
    }

    printf("A quantidade de torcedores do Cricuma e: %i\nA quantidade de torcedores do Prospera e: %i\nA quantiade de torcedores de outros times e: %i\n", crici,prosp,outros);
    printf("A media salarial dos torcedores do Prospera: %.2f\n", mediasal);
    printf("O numero de pessoas moradoras do Centro, torcedores de outros clubes: %i\n", outroscenter);
}