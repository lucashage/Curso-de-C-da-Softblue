/*Escreva um programa que, dada uma variavel x,temos y de acordo com a seguinte regra:
1. se x par, y = x/2
2. se x impar, y = 3*x +1
3. imprime y 
O programa deve entao jogar o valor de y em x e repetir o processo ate que y tenha o valor de 1*/

#include <stdio.h>
#pragma warning(disable:4996) //para poder usar scanf

int main() {
	int x;
	char *caractere;
	int y = 0;

	printf("\n Digite o valor de x: ");
	scanf("%d", &x);
	
	while (y != 1) {
		if (x % 2 == 0)
			y = x / 2;
		else
			y = 3 * x + 1;
		printf("\n y = %d", y);
		x = y;
	}


	scanf("%c", &caractere); //Limpa buffer
	return 0;
}
