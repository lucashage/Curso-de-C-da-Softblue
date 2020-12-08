/*Solicitar ao usuario uma quantidade de segundos (unidade de tempo) e imprimir na tela a quantidade de horas, minutos e segundos que o valor inserido representa*/

#include <stdio.h>
#pragma warning(disable:4996) //para poder usar scanf

int main() {
	int segundos;
	int minutos = 0;
	int horas = 0;
	char* caractere;

	printf("Digite uma quantidade de segundos: ");
	scanf("%d", &segundos);
	scanf("%c", &caractere); //Limpa buffer

	while (segundos >= 3600) {
		segundos -= 3600;
		horas++;
	}
	
	while (segundos >= 60) {
		segundos -= 60;
		minutos++;
	}
	
	printf("\n Isso equivale a %d hora(s), %d minuto(s) e %d segundo(s)", horas, minutos, segundos);

	scanf("%c", &caractere); //Limpa buffer
	return 0;
}
