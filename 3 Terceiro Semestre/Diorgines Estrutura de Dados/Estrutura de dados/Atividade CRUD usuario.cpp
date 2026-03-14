#include <stdio.h>

#define ARRAYS 15

void addUser();
void mostrarUser();

struct Usuario{
	char nome[30];
	int idade;
	float altura;
};

struct Usuario listUsers[ARRAYS];
int numUsers=0;


int main(){
	int opcao;
	
	do{	
		printf("---MENU---\n");
		printf("1 - Adicionar usuario\n2 - Editar\n3 - Excluir\n4 - Mostrar\n0 - Sair\n");
		
		scanf("%i", & opcao);
		
		switch(opcao){
			case 1:
				addUser();
			break;
			case 2:
			break;
			case 3:
			break;	
			case 4:
				mostrarUser();
			break;
			case 0:
				opcao = 0;
			break; 
			default:
			    printf("Opcao invalida\n");			
		}	
	}while(opcao!=0);
}


void addUser(){
	if(numUsers >= ARRAYS){
		printf("Numero de usuarios excedeu o limite\n");
		return;
	}
	printf("Digite o nome do usuario\n");
	scanf("%s",listUsers[numUsers].nome);
	
	printf("Digite a idade do usuario\n");
	scanf("%d", &listUsers[numUsers].idade);
	
	printf("Digite a altura do usuario\n");
	scanf("%f", &listUsers[numUsers].altura);
	
	numUsers++;
	printf("Usario cadastrado com sucesso\n");
}

void editUser(){
	
}

void delUser(){
	
}

void mostrarUser(){
	if(numUsers == 0){
		printf("Lista vazia\n");
		return;
	}
	printf("--Usuarios cadastrados--\n");
	for(int i =0;i<numUsers;i++){
		printf("%i. Nome: %s",i, listUsers[i].nome);
		printf(" Idade: %i",listUsers[i].idade);
		printf(" Altura: %.2f\n", listUsers[i].altura);
	}
}

