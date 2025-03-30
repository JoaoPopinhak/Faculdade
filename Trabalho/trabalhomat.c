#include <stdio.h>
int main () {
    float totalkg, totalconsumo, dias, horas, numerof1, numerof2, minutos;
    totalkg = 100;
    totalconsumo = 15,5;

    numerof1 = totalkg / totalconsumo;
    dias = (int)numerof1;
    numerof2 = (numerof1 - dias) * 24;
    horas = (int)numerof2;   
    minutos = (numerof2 - horas) * 60;

    printf("dias: %f  horas: %f  minutos: %f", dias, horas, minutos);
  
}