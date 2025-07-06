#include <stdio.h> 
int main (){

    int qtddependentes;
    float salariomin, horastrabalhadas, horasextratrabalhadas, valorhoratrabalhada, salariobruto;

    printf("Digite o valor do salario minimo atual: \n");
    scanf("%f", & salariomin);

    printf("Digite as horas trabalahdas: \nObs: se digitar 1 ira encerrar o programa.\n");
    scanf("%f", & horastrabalhadas);

    while(horastrabalhadas != 1){


        printf("Digite o numeros de dependentes: \n");
        scanf("%i", & qtddependentes);

        printf("Digite as horas extra trabalahdas: \n");
        scanf("%f", & horasextratrabalhadas);

        valorhoratrabalhada = 0.1 * salariomin;

        salariobruto = horastrabalhadas * valorhoratrabalhada;

        salariobruto = salariobruto + (32 * qtddependentes);
    
        salariobruto = salariobruto + (horasextratrabalhadas * (0.5 * valorhoratrabalhada));
        
        if(salariobruto > 900 && salariobruto <= 1500){
            salariobruto = salariobruto - (0.1 * salariobruto);
        } else if (salariobruto > 1500){
            salariobruto = salariobruto - (0.2 * salariobruto);
        }

        if(salariobruto <=900){
            salariobruto = salariobruto + 100;
        }else{
            salariobruto = salariobruto + 50;
        }            

        
        printf("teste %.2f \n", salariobruto);


        printf("Digite o valor do salario minimo atual: \n");
        scanf("%f", & salariomin);

        printf("Digite as suas horas trabalahdas: \nObs: se digitar 1 ira encerrar o programa.\n");
        scanf("%f", & horastrabalhadas);   
    }

    printf("Calculos Realizados\nFIM");
}