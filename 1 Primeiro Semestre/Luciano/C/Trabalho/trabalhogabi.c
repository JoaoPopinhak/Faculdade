#include <stdio.h>
int main () {
	
	
	float vfinanceiro, precokg, racaototal;

	printf("Informe o valor financeiro disponivel para compra da racao: ");
	scanf("%f" , &vfinanceiro);
	
	printf("Informe o custo do KG da racao: ");
	scanf("%f" , &precokg); 

	racaototal= vfinanceiro/precokg;
	
	float qcachorro, kgcachorro, kgpordia;
	
	printf("Informe quantidade de cachorros controlados pela ONG: ");
	scanf("%f", &qcachorro);

	printf("Informe o consumo em KG por cachorro(no dia): ");
	scanf("%f" , &kgcachorro);
	
	kgpordia=qcachorro*kgcachorro;
	
	float dias, diasi, horas, horasi, minutos;
	
	dias=racaototal/kgpordia;
	diasi=(int)dias;
	
	horas=(dias-diasi)*24;
	horasi=(int)horas;
	
	minutos=(horas-horasi)*60;
	minutos=(int)minutos;
	
	printf("A racao total disponivel e de %.2f KG\n" , racaototal);
	
	printf("E a quantidade total de consumo por dia e de %.2f KG\n" , kgpordia);
	
	printf("Temos %.0f dias\n%.0f Horas\nE %0.f Minutos de racao disponivel." , dias, horasi, minutos);
	
}