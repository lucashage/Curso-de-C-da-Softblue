/* Solicitar ao usuario duas as matrizes 2x2 e apresentar o resultado de suas somas.*/
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#pragma warning(disable:4996) //para poder usar scanf
#define LINHAS_MATRIZ 2
#define COLUNAS_MATRIZ 2

void receberElementosMatrizUsuario(int **m) {

	for (int i = 0; i < LINHAS_MATRIZ; i++) {
		for (int j = 0; j < COLUNAS_MATRIZ; j++) {
			printf("\nDigite o elemento (%d,%d) da matriz: ",i,j);
			scanf("%d", &m[i][j]);
		}
	}
}

int **somaMatriz(int **m1, int **m2, int **s) {


	for (int i = 0; i < LINHAS_MATRIZ; i++) {
		for (int j = 0; j < COLUNAS_MATRIZ; j++) {
			s[i][j] = m1[i][j]+m2[i][j];
		}
	}
	return s;
}

void imprimeMatriz(int **m) {
	for (int i = 0; i < LINHAS_MATRIZ; i++) {
		printf("\n");
		for (int j = 0; j < COLUNAS_MATRIZ; j++) {
			printf("%d ",m[i][j]);
		}
	}
}
int main(){
	char* caractere;
	int **primeiraMatriz;
	int **segundaMatriz;
	int** matrizSoma = NULL;

	//Alocando linhas da 1a matriz com malloc
	primeiraMatriz = (int**)malloc(LINHAS_MATRIZ * sizeof(int*));

	//Alocando colunas da 1a matriz com malloc
	for (int i = 0; i < COLUNAS_MATRIZ; i++) {
		primeiraMatriz[i] = (int*)malloc(COLUNAS_MATRIZ * sizeof(int));
	}

	//Alocando linhas da 2a matriz com malloc
	segundaMatriz = (int**)malloc(COLUNAS_MATRIZ * sizeof(int*));

	//Alocando colunas da 2a matriz com malloc
	for (int i = 0; i < LINHAS_MATRIZ; i++) {
		segundaMatriz[i] = (int*)malloc(LINHAS_MATRIZ * sizeof(int));
	}
	//Alocando linhas da matriz soma com malloc
	matrizSoma = (int**)malloc(COLUNAS_MATRIZ * sizeof(int*));

	//Alocando colunas da matrizsoma transposta com malloc
	for (int i = 0; i < LINHAS_MATRIZ; i++) {
		matrizSoma[i] = (int*)malloc(LINHAS_MATRIZ * sizeof(int));
	}

	printf("Vamos preencher a primeira matriz!\n");
	receberElementosMatrizUsuario(primeiraMatriz);
	printf("\n Agora vamos preencher a segunda matriz!\n");
	receberElementosMatrizUsuario(segundaMatriz);

	printf("\nMatriz Soma:\n");
	imprimeMatriz(somaMatriz(primeiraMatriz,segundaMatriz,matrizSoma));
	
	free(primeiraMatriz);
	free(segundaMatriz);
	free(matrizSoma);
	scanf("%c", &caractere);
	scanf("%c", &caractere);
	return 0;
}
