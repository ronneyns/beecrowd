#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	const int M = 1000;
	char entrada[M], saida[M], temp;
	int n, i, pos, meio;

	memset(entrada, '\0', M * sizeof(char));
	scanf("%d", &n);
	for (; n > 0; n--) {
		// Limpar o buffer
		scanf("%c", &temp);
		scanf("%[^\n]", entrada);

		memset(saida, '\0', M * sizeof(char));
		pos = 0;
		for (i = strlen(entrada) - 1; i >= 0; i--) {
			if (!isalpha(entrada[i])) {
				saida[pos] = entrada[i];
			} else {
				saida[pos] = entrada[i] + 3;
			}
			pos++;
		}

		meio = strlen(entrada) / 2;
		for (i = meio; i < strlen(entrada); i++) {
			saida[i] = saida[i] - 1;
		}

		printf("%s\n", saida);
	}
	return 0;
}

