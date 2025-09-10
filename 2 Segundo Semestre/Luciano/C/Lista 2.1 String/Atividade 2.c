#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase [30];

    printf("Digite uma frase\n");
    gets(frase);

    for(int i=0; i<=strlen(frase); i++){
        if(tolower(frase[i]) == 'a' ||
           tolower(frase[i]) == 'e' ||
           tolower(frase[i]) == 'i' ||
           tolower(frase[i]) == 'o' ||
           tolower(frase[i]) == 'u'){
            frase[i] = '*';
           }
    }
    printf("%s", frase);
}