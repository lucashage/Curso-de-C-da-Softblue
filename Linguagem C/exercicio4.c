/*Imprimir na tela a soma de todos os numeros pares de 50 a 100, inclusive. O resultado deve ser 1950*/

#include <stdio.h>
#pragma warning(disable:4996) //para poder usar scanf

int main() {
	char* caractere;

	printf("A soma de todos os pares de 50 a 100 eh: ");

	int soma = 0;

	for (int i = 50; i <= 100; i+=2)
		soma += i;
	printf("%d", soma);
	

	scanf("%c", &caractere); //Limpa buffer
	return 0;
}
