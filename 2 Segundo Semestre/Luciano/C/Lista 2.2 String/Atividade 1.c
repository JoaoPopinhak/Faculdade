#include <string.h>
#include <stdio.h>

int main(){
    char frase[10];
    char frasedupli[30];
    int j=0;

    printf("Digite uma frase");
    gets(frase);

    for (int i = 0; i <= strlen(frase); i++){
        frasedupli[j++] = frase[i];
        frasedupli[j++] = frase[i];
    }

    printf("%s", frasedupli);
}
