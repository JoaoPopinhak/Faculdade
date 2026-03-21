#include <stdio.h>
#include "estruturaDados.h"

int numNomes=0;
struct Usuario listUsers[ARRAY];

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
				editUser();
			break;
			case 3:
				delUser();
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
