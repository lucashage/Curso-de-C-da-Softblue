/* Baseado na matriz unidimensional (2,7,4,6,12,32,45,12,34), ordená-lo em ordem crescente.*/
#include "stdio.h"
#include "string.h"
#pragma warning(disable:4996) //para poder usar scanf

void imprimeMatriz(int vetor[]) {
	for (int cont = 0; cont < 9; cont++)
		printf("%d ",vetor[cont]);
}

int main(){
	char* caractere;
	int aux; 
	int matriz[9] = { 2,7,4,6,12,32,45,12,34 };
	int tamVetor = 9;

	printf("Matriz original: ");
	imprimeMatriz(matriz);

	for (int x = 0; x < tamVetor-1; x++) {
		for (int y = x + 1; y < tamVetor; y++) {
			if (matriz[x] > matriz[y]) {
				aux = matriz[x];
				matriz[x] = matriz[y];
				matriz[y] = aux;
			}
		}
	}

	printf("\n");
	printf("Matriz ordenada: ");
	imprimeMatriz(matriz);


	scanf("%c", &caractere);
	return 0;
}
