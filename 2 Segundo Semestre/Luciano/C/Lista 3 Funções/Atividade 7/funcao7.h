#include <stdio.h>

void funcao7(int num){

    for (int i = 1; i <= num; i++){
        printf("%i\n", i);

        for (int j = 1; j <= i; j++){

            printf("%i", i*j);
        }
    }
}