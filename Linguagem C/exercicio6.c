/*Solicitar ao usuario 3 numeros inteiros e imprimir na tela o menor deles, o maior deles e a media deles.*/

#include <stdio.h>
#pragma warning(disable:4996) //para poder usar scanf

int main() {
	char *caractere;

	int primeiro, segundo, terceiro;
	int maior, menor;
	float media; 

	printf("\n Digite o primeiro numero inteiro: ");
	scanf("%d", &primeiro);
	printf("\n Digite o segundo numero inteiro: ");
	scanf("%d", &segundo);
	printf("\n Digite o terceiro numero inteiro: ");
	scanf("%d", &terceiro);

	//Buscando o maior
	if (primeiro > segundo&& primeiro > terceiro)
		maior = primeiro;
	else if (segundo > primeiro && segundo > terceiro)
		maior = segundo;
	else
		maior = terceiro;

	//Buscando o menor
	if (primeiro < segundo && primeiro < terceiro)
		menor = primeiro;
	else if (segundo < primeiro&& segundo < terceiro)
		menor = segundo;
	else
		menor = terceiro;

	//Fazendo a média
	media = (float) (primeiro + segundo + terceiro) / 3;

	printf("\n O maior numero: %d", maior);
	printf("\n O menor numero: %d", menor);
	printf("\n A media: %.2f", media);

	scanf("%c", &caractere); //Limpa buffer
	return 0;
}
