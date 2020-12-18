/* Criar uma função que seja void e receba um ponteiro e uma string. A função deve armazenar no ponteiro a posição da primeira letra maiúscula, que deve ser imprensa na main.*/
#include "stdio.h"
#include "string.h"
#pragma warning(disable:4996) //para poder usar scanf
#define A 65
#define Z 90

void procuraLetraMaiuscula(int* p, char string[]){
	for (int i = 0; i <= strlen(string); i++){
	if (string[i] >= A & string[i] <= Z) {
		*p = i;
		return;
		}
	}

}

int main(){
	char* caractere;

	char vetor[20] = "eu estudo Ponteiro";
	int posicao;
	procuraLetraMaiuscula(&posicao, vetor);
	printf("Primeira letra maiuscula: %c", vetor[posicao]);
	printf("\nPosicao: %d", posicao);

	scanf("%c", &caractere);
	return 0;
}
