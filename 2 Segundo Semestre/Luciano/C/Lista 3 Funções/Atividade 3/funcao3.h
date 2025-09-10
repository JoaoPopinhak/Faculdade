#include <stdio.h>

int somaentreles(int num1, int num2)
{
    int diferenca;

    if (num1 > num2){
        diferenca = num1 - num2;
    }else{
        diferenca = num2 - num1;
    }

    for(int i = diferenca - 1; i>0; i--){
        diferenca = diferenca + i;
    }

    return diferenca;
}