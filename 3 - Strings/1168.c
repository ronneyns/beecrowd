#include <stdio.h>
#include <string.h>

int conta_leds(char *valor, int tamanho) {
	int qtde_leds[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	int qtde;

	qtde = 0;
	for (int i = 0; i < tamanho; i++) {
		qtde += qtde_leds[valor[i] - 0x30];
	}
	return qtde;
}
 
int main() {
	int n;
	char valor[100];

	scanf("%d", &n);
	for (; n > 0; n--) {
		scanf("%s", valor);
		printf("%d leds\n", conta_leds(valor, strlen(valor)));
	}
 
    return 0;
}
