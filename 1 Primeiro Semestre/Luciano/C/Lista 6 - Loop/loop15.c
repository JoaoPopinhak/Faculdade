#include <stdio.h>
int main (){
    int pais, transporte, perigo;
    float precounit, imposto, valortransp, seguro, precototal, cont;

    printf("Insira o valor do preco unitario do produto: ");
    scanf("%f", & precounit);

    while(precounit > 0){
        printf("Insira o pais de origem\n1 - Para Estados Unidos\n2 - Para Mexico\n3 - Para Outros\n");
        scanf("%i", & pais);

        printf("Insira o meio de transporte\n1 - Para Terrestre\n2 - Para Fluvial\n3 - Para Aereo\n");
        scanf("%i", &transporte);

         printf("A carga e perigosa?\n1 - Para SIM\n2 - Para NAO\n"); 
         scanf("%i", & perigo);  

         if(precounit <= 100){
            imposto = 0.05 * precounit;
         }else{
            imposto = 0.1 * precounit;
         }

         switch(perigo){
            case 1:

            switch(pais){
                case 1:
                valortransp = 50;
                switch(transporte){
                    case 3:
                    seguro = 0.5 * precounit;
                    break;
                    default:
                    seguro = 0;
                }
                break;

                case 2:
                valortransp = 21;
                seguro = 0.5 * precounit;
                break;

                case 3:
                valortransp = 24;
                switch(transporte){
                    case 3:
                    seguro = 0.5 * precounit;
                    break;
                    default:
                    seguro = 0;
                }
                break;

                default:
                printf("Pais invalido");
            }

            break;
            case 2:

            switch(pais){
                case 1:
                valortransp = 12;
                switch(transporte){
                    case 3:
                    seguro = 0.5 * precounit;
                    break;
                    default: 
                    seguro = 0;
                }
                break;

                case 2:
                valortransp = 21;
                seguro = 0.5 * precounit;
                break;

                case 3: 
                valortransp = 60;
                switch(transporte){
                    case 3:
                    seguro = 0.5 * precounit;
                    break;
                    default:
                    seguro = 0;
                }
                break;

                default:
                printf("Pais invalido");
            }

            break;
            default: 
            printf("Perigo invalido");
         }

         cont++;
         precototal = precototal + (precounit + imposto + valortransp + seguro);
         

         printf("Insira o valor do preco unitario do produto: ");
         scanf("%f", & precounit);
    }
    printf("O preco total da compra incluindo o preco do produto + impostos + valor de transporte + seguro: %.2f R$\n", precototal);
    printf("O valor total de imposto: %.2f R$", imposto * cont);
}