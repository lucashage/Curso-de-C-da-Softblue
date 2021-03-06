/*Solicitar 2 valores numericos inteiros e um caractere de operacao (+,-,* ou /) e realizar a operacao informada com os numeros inseridos, apresentando o resultado na tela.*/

#include <stdio.h>
#pragma warning(disable:4996) //para poder usar scanf

int main() {
	char *caractere;

	int primeiro, segundo;
	int resultado;
	char operacao; 

	printf("\n Digite o primeiro numero inteiro: ");
	scanf("%d", &primeiro);
	printf("\n Digite o segundo numero inteiro: ");
	scanf("%d", &segundo);
	printf("\n Digite a operacao a ser feita: ");
	scanf("%c", &caractere); //Limpa buffer
	scanf("%c", &operacao);

	switch (operacao){
	case '+': resultado = primeiro + segundo; break;
	case '-': resultado = primeiro - segundo; break;
	case '*': resultado = primeiro * segundo; break;
	case '/': resultado = primeiro / segundo; break;
	default:
		break;
	}

	printf("\nResultado: %d", resultado);
	scanf("%c", &caractere); //Limpa buffer
	return 0;
}
