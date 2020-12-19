/* Solicitar ao usuario os elementos inteiros de uma matriz 3x4 e apresentar a matriz e a matriz transposta.*/
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#pragma warning(disable:4996) //para poder usar scanf
#define LINHAS_MATRIZ 3
#define COLUNAS_MATRIZ 4

void receberElementosMatrizUsuario(int **m) {

	for (int i = 0; i < LINHAS_MATRIZ; i++) {
		for (int j = 0; j < COLUNAS_MATRIZ; j++) {
			printf("\nDigite o elemento (%d,%d) da matriz: ",i,j);
			scanf("%d", &m[i][j]);
		}
	}
}

void calculaTransposta(int **m, int **t) {
	for (int i = 0; i < LINHAS_MATRIZ; i++) {
		for (int j = 0; j < COLUNAS_MATRIZ; j++) {
			t[i][j] = m[j][i];
		}
	}
}

void imprimeMatriz(int **m) {
	for (int i = 0; i < sizeof(m)-1; i++) {
		printf("\n");
		for (int j = 0; j < sizeof(m[i])-1; j++) {
			printf("%d ",m[i][j]);
		}
	}
}
int main(){
	char* caractere;
	int **matriz;
	int **matrizTransposta;

	//Alocando linhas da matriz com malloc
	matriz = (int**)malloc(LINHAS_MATRIZ * sizeof(int*));

	//Alocando colunas da matriz com malloc
	for (int i = 0; i < COLUNAS_MATRIZ; i++) {
		matriz[i] = (int*)malloc(COLUNAS_MATRIZ * sizeof(int));
	}

	//Alocando linhas da matriz transposta com malloc
	matrizTransposta = (int**)malloc(COLUNAS_MATRIZ * sizeof(int*));

	//Alocando colunas da matriz transposta com malloc
	for (int i = 0; i < LINHAS_MATRIZ; i++) {
		matrizTransposta[i] = (int*)malloc(LINHAS_MATRIZ * sizeof(int));
	}


	receberElementosMatrizUsuario(matriz);
	calculaTransposta(matriz, matrizTransposta);
	printf("Matriz Original:\n");
	imprimeMatriz(matriz);
	printf("\nMatriz Transposta:\n");
	imprimeMatriz(matrizTransposta);
	
	//free(matriz);
	//free(matrizTransposta);
	 	 

	scanf("%c", &caractere);
	return 0;
}
