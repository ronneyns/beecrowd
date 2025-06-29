#include <stdio.h>

int main() {
	int pressao_desejada, pressao_lida;

	while (scanf("%d", &pressao_desejada) != EOF) {
		scanf("%d", &pressao_lida);
		printf("%d\n", pressao_desejada - pressao_lida);
	}

	return 0;
}

