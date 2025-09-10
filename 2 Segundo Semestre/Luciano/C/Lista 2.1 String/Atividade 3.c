#include <stdio.h>
#include <string.h>

int main()
{
    char frase[30], novafrase[30];
    int j=0;

    printf("Digite a frase:\n");
    gets(frase);

    for (int i = strlen(frase)-1; i >= 0; i--)
    {
        novafrase[j] = frase[i];
        j++;
    }
    printf("%s", novafrase);
}