#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[30];
    int qtdvogais = 0, tam = 0;

    printf("Digite uma frase a baixo\n");
    gets(frase);

    tam = strlen(frase);

    for (int i = 0; i <= tam; i++){
        if (tolower(frase[i]) == 'a' ||
            tolower(frase[i]) == 'e' ||
            tolower(frase[i]) == 'i' ||
            tolower(frase[i]) == 'o' ||
            tolower(frase[i]) == 'u'){
            qtdvogais++;
        }
    }

    printf("%s, %i", frase, qtdvogais);
}