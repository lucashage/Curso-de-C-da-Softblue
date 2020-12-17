/* Crie uma função do tipo void que receba dois ponteiros referentes a duas variáveis inteiras e troque seus valores. Exibir os valores das variáveis antes e depois de serem invocadas.*/

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996) //para poder usar scanf


void trocaValores(int* p1, int* p2) {
	
	int aux;

	aux = *p1; 
	*p1 = *p2;
	*p2 = aux;

}

int main() {

	char *caractere;
	int aux1 = 5;
	int aux2 = 10;

	int* x;
	int* y;

	x = &aux1;
	y = &aux2;

	printf("\nAntes da troca:\n");
	printf("x = %d\n", *x);
	printf("y = %d\n", *y);

	trocaValores(x, y);

	printf("\nDepois da troca:\n");
	printf("x = %d\n", *x);
	printf("y = %d\n", *y);

	scanf("%c", &caractere); //Limpa buffer
	return 0;
}
