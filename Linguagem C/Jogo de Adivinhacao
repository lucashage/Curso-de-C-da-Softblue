/*Escreva um programa que, dada uma variavel x,temos y de acordo com a seguinte regra:
1. se x par, y = x/2
2. se x impar, y = 3*x +1
3. imprime y 
O programa deve entao jogar o valor de y em x e repetir o processo ate que y tenha o valor de 1*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996) //para poder usar scanf

#define RANGE_JOGO 20

int main() {

	char *caractere;

	int numeroSecreto, tentativa;


	srand(time(NULL)); // se não fizer isso, o rand() vai dar sempre o mesmo valor na aplicação
	numeroSecreto = rand() % RANGE_JOGO + 1; //numero secreto de 1 a 20 (RANGE_JOGO)

	do {
		printf("Adivinhe um numero entre 1 e 20: ");
		scanf("%d", &tentativa);
		scanf("%c", &caractere);

		if (numeroSecreto < tentativa)
			printf("\n Dica: O numero eh menor! \n");
		else if (numeroSecreto > tentativa)
			printf("\n Dica: O numero eh maior! \n");
			


	} while (numeroSecreto != tentativa);

	printf("UHUUL! PARABENS! VOCE ACERTOU!");
	printf("\n\n\n Pressione <ENTER> para sair...");


	scanf("%c", &caractere); //Limpa buffer
	return 0;
}
