/*Imprimir na tela os múltiplos de 3 entre  1 e 100, um em cada linha*/

#include <stdio.h>
int main() {

	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0)
			printf("%d \n", i);
	}
}
