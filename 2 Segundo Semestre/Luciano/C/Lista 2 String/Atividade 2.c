#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[30];

    printf("Digite uma frase\n");
    gets(frase);

    for(int i=0;i<=strlen(frase); i++){
        if(tolower(frase[i]) == 'a'){
            frase[i] = 'b';
        }
    }

    printf("%s", frase);
}