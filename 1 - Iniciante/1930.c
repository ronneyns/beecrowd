#include <stdio.h>

int main() {
	int qtde_reguas = 4;
	int reguas[4];
	int total_tomadas;

	while (scanf("%d%d%d%d", &reguas[0], &reguas[1], &reguas[2], &reguas[3]) != EOF) {
		total_tomadas = 0;
		for (int i = 0; i < qtde_reguas; i++) {
			total_tomadas += reguas[i];
		}
		printf("%d\n", total_tomadas - 3);
	}
	return 0;
}

