#include <stdio.h>

float atualizaSalario(float *salarioP){
    float bonusMaior = 190, bonusMenor = 110;
    
    if(*salarioP >= 1200){
        *salarioP += bonusMenor;
        return bonusMenor;
        
    }else{
        *salarioP += bonusMaior;
        return bonusMaior;
    }

}

int main (){
    float salario, bonus;

    printf("Digite seu salario: ");
    scanf("%f", & salario);

    bonus = atualizaSalario(&salario);

    printf("Seu novo salario e: %.2f Voce recebeu um bonus de %.2f", salario, bonus);
    
}