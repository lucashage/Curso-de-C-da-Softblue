/* Solicitar ao usuario 5 numeros inteiros para armazenar numa matriz unidimensional. Apresentar maior, menor e media.*/
#include "stdio.h"
#include "string.h"
#pragma warning(disable:4996) //para poder usar scanf

float media(int vetor[]) {
	float valorMedio = 0;
	for (int x = 0; x < 5; x++)
		valorMedio +=  vetor[x];
	valorMedio = valorMedio / 5;
	return valorMedio;
}

int maior(int vetor[]) {
	int maiorValor= 0;
	for (int x = 0; x < 5; x++) {
		if (maiorValor<vetor[x])
			 maiorValor = vetor[x];
	}
	return maiorValor;
}

int menor(int vetor[]) {
	int menorValor = 999999999;
	for (int x = 0; x < 5; x++) {
		if (menorValor>vetor[x])
			menorValor = vetor[x];
	}
	return menorValor;
}


int main(){
	char* caractere;
	int vetor[5];
	
	printf("\n Insira o primeiro valor da matriz: ");
	scanf("%d", &vetor[0]);
	printf("\n Insira o segundo valor da matriz: ");
	scanf("%d", &vetor[1]);
	printf("\n Insira o terceiro valor da matriz: ");
	scanf("%d", &vetor[2]);
	printf("\n Insira o quarto valor da matriz: ");
	scanf("%d", &vetor[3]);
	printf("\n Insira o quinto valor da matriz: ");
	scanf("%d", &vetor[4]);


	printf("\nMedia: %.2f", media(vetor));
	printf("\nMaior: %d", maior(vetor));
	printf("\nMenor: %d", menor(vetor));

	scanf("%c", &caractere);
	return 0;
}
