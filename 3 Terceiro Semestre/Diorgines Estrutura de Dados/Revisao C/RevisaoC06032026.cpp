#include<stdio.h>
#include<stdlib.h>
#define NOMES 100

void verPar(int valor);
void verificarPositivo(int valor);
void print5a1();
struct pessoa;

int main(){
	int opcao;
	
	printf("Escolha uma opcao: \n");
	printf("1 - Verificar Par\n");
	printf("2 - verificar positivo\n");
	printf("3 - Imprimir de 5 a 1\n");
	printf("4 - Fazer media de 5 numeros\n");
	printf("5 - Cadastrar pessoa");
	scanf("%i", & opcao);
	
	do{
		switch(opcao){
		case 1:
			int valor;
			printf("Digite um valor: ");
			scanf("%i", & valor);
			
			verPar(valor);
			break;	
		case 2:
			valor;
			printf("Digite um valor: \n");
			scanf("%i", & valor);
			
			verificarPositivo(valor);
			break;
		case 3:
			print5a1();
			break;
		case 4:
			float valorF, somaValor, resultado;
			for(int i = 0; i < 5; i++){
				printf("Digite o valor: \n");
				scanf("%f", & valorF);
				somaValor = somaValor + valorF;
			}
			resultado = somaValor / 5;
			printf("A media entre os numero %f\n", resultado);
			break;
		case 5:
			
		    break;	
		case 0:
		    break;			
		default:
		printf("default\n");	
		break;
	}
	
	printf("Escolha uma opcao: \n");
	printf("1 - Verificar Par\n");
	printf("2 - verificar positivo\n");
	printf("3 - Imprimir de 5 a 1\n");
	printf("4 - Fazer media de 5 numeros\n");
	printf("0 - para sair\n");
	scanf("%i", & opcao);
	
	}while(opcao != 0);	
}

void verPar(int valor){
    if(valor % 2 == 0){
		printf("O numero %i  e par\n", valor);
	}else{
		printf("O numero %i e impar\n", valor);
	}
}

void verificarPositivo(int valor){
    if(valor >= 0){
		printf("O valor %i e positivo\n", valor);
	}else{
		printf("O valor %i e negativo\n", valor);
	}
}

void print5a1(){
	for(int i = 5; i > 0; i--){
		printf("%i ", i);
	}	
	printf("\n");
}

struct Pessoas{
	char[30] nome;
	int idade, tel, cpf;
	float salario;
	
	//Lembrar como usar struct
}













