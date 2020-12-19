/* Escreva um programa que solicite ao usuário um valor inteiro n. Crie dinamicamente um vetor com n posições e solicite os valores ao usuario. Imprima a soma.*/
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#pragma warning(disable:4996) //para poder usar scanf


int main() {
	char* caractere;
	
	int* vetor;
	int n;
	int soma=0;
	printf("Diga o valor do tamanho do vetor: ");
	scanf("%d", &n);

	vetor = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		printf("\nDigite o valor da posicao %d: ", i);
		scanf("%d", &vetor[i]);
		soma += vetor[i];
	}
	
	printf("\nO resultado da soma dos valores do vetor: %d", soma);

	scanf("%c", &caractere);
	scanf("%c", &caractere);
	return 0;
}
