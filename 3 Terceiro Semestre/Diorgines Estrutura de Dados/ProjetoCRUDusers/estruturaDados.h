#ifndef ESTRUTURA_DADOS_H
#define ESTRUTURA_DADOS_H

#define ARRAY 15

struct Usuario{
	char nome[30];
	int idade;
	float altura;
};

extern struct Usuario listUsers[ARRAY];
extern int numUsers;

void addUser();
void mostrarUser();
void delUser();
void editUser();

#endif
