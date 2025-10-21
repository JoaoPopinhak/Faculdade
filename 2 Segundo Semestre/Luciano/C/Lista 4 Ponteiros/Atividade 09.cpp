#include <stdio.h>

void valorCarro(float valorFabrica,float percentLucro,float percentImposto, float *valorLucro, float *valorImposto,float *valorLiquido){
	*valorLucro   = percentLucro * valorFabrica / 100.0;
	*valorImposto = percentImposto * valorFabrica / 100.0;
	*valorLiquido = valorFabrica + *valorLucro - *valorImposto;
}

int main(){
	
	float valorFabrica, percentLucro, percentImposto, valorLucro=0, valorImposto=0, valorLiquido=0;
	
	printf("Digite o valor de fabrica do veiculo: ");
	scanf("%f", & valorFabrica);
	
	printf("Digite o percentual do Lucro: ");
	scanf("%f", & percentLucro);

	printf("Digite o percentual do Imposto: ");
	scanf("%f", & percentImposto);
	
	
	valorCarro(valorFabrica, percentLucro, percentImposto, &valorLucro, &valorImposto, &valorLiquido);
	
	
	printf("Valor Lucro: %.2f\n", valorLucro);
	
	printf("Valor Imposto: %.2f\n", valorImposto);
	
	printf("Valor Liquido: %.2f", valorLiquido);
	
}
