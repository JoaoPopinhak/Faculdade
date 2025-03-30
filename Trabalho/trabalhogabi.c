#include <stdio.h>
int main () {
	
	float vfinanceiro, precokg, racaototal;

	printf("Informe o valor financeiro: ");
	scanf("%f" , &vfinanceiro);
	
	printf("Informe o preco kg: ");
	scanf("%f" , &precokg);

	racaototal= vfinanceiro/precokg;
	
	float qcachorro, kgcachorro, kgpordia;
	
	printf("Informe quantos cachorros: ");
	scanf("%f", &qcachorro);
	
	printf("Informe kg por cachorro: ");
	scanf("%f" , &kgcachorro);
	
	kgpordia=qcachorro*kgcachorro;
	
	float dias, diasi, horas, horasi, minutos;
	
	dias=racaototal/kgpordia;
	diasi=(int)dias;
	
	horas=(dias-diasi)*24;
	horasi=(int)horas;
	
	minutos=(horas-horasi)*60;
	minutos=(int)minutos;
	
	printf("A racao total: %f" , racaototal);
	
	printf("a quantidade de consumo por dia: %f" , kgpordia);
	
	printf("O total de dias: %f" , dias);
	
	printf("Horas: %f" , horasi);
	
	printf("Minutos: %f", minutos);
	
	
}