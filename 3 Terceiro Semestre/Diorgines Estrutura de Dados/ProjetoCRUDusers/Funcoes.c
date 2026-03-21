#include <stdio.h>
#include <string.h>
#include "estruturaDados.h"

void addUser(){
	if(numUsers >= ARRAY){
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
	int i, indicie;
	
	printf("Digite o usuario a ser editado\n");
	scanf("%i", & indicie);
	
	if(indicie < 0 || indicie >=numUsers){
		printf("Erro");
	}
	
	printf("Digite o novo nome: \n");
	scanf("%s", listUsers[indicie].nome);
	
	printf("Digite a nova idade: \n");
	scanf("%i", &listUsers[indicie].idade);
	
	printf("Digite a nova altura: \n");
	scanf("%f", &listUsers[indicie].altura);	
	
	printf("Usuario editado\n");	
}

void delUser(){
	int usuarioEscolhido;
	mostrarUser();
	
	printf("Digite o usuario que deseja excluir\n");
	scanf("%i", & usuarioEscolhido);
	
	if(usuarioEscolhido < 0 || usuarioEscolhido >= numUsers){
		printf("Erro");
	}
	
	for(int i = usuarioEscolhido; i < numUsers-1; i++){
		strcpy(listUsers[i].nome, listUsers[i+1].nome);
		numUsers--;
	}
	
	printf("Usuario excluido\n");
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
