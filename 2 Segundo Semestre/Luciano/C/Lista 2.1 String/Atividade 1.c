#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[30];
    int qtdpalavras=0;

    printf("Digite a frase\n");
    gets(frase);

    for(int i=0; i<=strlen(frase); i++){
        if(frase[i] == ' ' || frase[i] == '\0'){
            qtdpalavras++;
        }
    }
    printf("%i", qtdpalavras);
}
