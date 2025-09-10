#include <stdio.h>

int funcao4(int num1, int num2, int num3){

    int resultado = 0;

    if (num1 > 1){
        if (num2 < num3){

            for (int i = num2; i <= num3; i++){
                
                if (i % num1 == 0){
                    resultado = resultado + i;
                }
            }

            return resultado;
        }else{
            for(int i = num3; i <= num2; i++){

                if(i % num1 == 0){
                    resultado = resultado + i;
                }
            }

            return resultado;
        }
    }else{
        printf("O numero A e menor que 1. Tente novamente");
    }

    return 0;
}