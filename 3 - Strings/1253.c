#include <stdio.h>
#include <string.h>

#define QTDE_LETRAS 26

int main() {
	int n;
	char texto[50];
	int deslocamento;

	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			scanf("%s%d", texto, &deslocamento);
			for (int j = 0; j < strlen(texto); j++) {
				texto[j] = (texto[j] - 'A' - deslocamento + QTDE_LETRAS) % QTDE_LETRAS + 'A';
			}
			printf("%s\n", texto);
		}
	}

	return 0;
}

