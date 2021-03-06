/* Escreva um programa que solicite ao usuário dois valores inteiros: l (linhas) e c (colunas).Crie a matriz lxc dinamicamente, solicite ao usuário os valores e imprima ela e a sua transposta.*/
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#pragma warning(disable:4996) //para poder usar scanf


int main() {
	char* caractere;
	int l, c;
	int **matriz;
	int **transposta;

	printf("Quantas linhas tera nossa matriz? ");
	scanf("%d", &l);
	printf("Quantas colunas tera nossa matriz? ");
	scanf("%d", &c);


	//Alocando linhas da matriz com malloc
	matriz = (int**)malloc(l * sizeof(int*));

	//Alocando colunas da matriz com malloc
	for (int i = 0; i < l; i++) {
		matriz[i] = (int*)malloc(c * sizeof(int));
	}

	//Alocando linhas da matriz transposta com malloc
	transposta = (int**)malloc(c * sizeof(int*));

	//Alocando colunas da matriz transposta com malloc
	for (int i = 0; i < c; i++) {
		transposta[i] = (int*)malloc(l * sizeof(int));
	}

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			printf("Digite o elemento (%d,%d) da matriz: ", i,j);
			scanf("%d", &matriz[i][j]);
		}
	}

	for (int i = 0; i < c; i++) {
		for (int j = 0; j < l; j++) {
			transposta[i][j] = matriz[j][i];
		}
	}

	printf("\n Matriz original:");
	for (int i = 0; i < l; i++) {
		printf("\n");
		for (int j = 0; j < c; j++)
			printf("%d ", matriz[i][j]);
	}

	printf("\n Matriz transposta:");
	for (int i = 0; i < c; i++) {
		printf("\n");
		for (int j = 0; j < l; j++)
			printf("%d ", transposta[i][j]);
	}

	scanf("%c", &caractere);
	scanf("%c", &caractere);
	return 0;
}
