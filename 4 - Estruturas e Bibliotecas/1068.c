#include <stdio.h>
#include <string.h>

int main() {
	char expressao[1000];
	int qtde_parenteses, tam_exp;

	while (scanf("%s", expressao) != EOF) {
		qtde_parenteses = 0;
		tam_exp = strlen(expressao);
		for (int i = 0; i < tam_exp; i++) {
			switch (expressao[i]) {
				case '(': {
					qtde_parenteses++;
					break;
				}
				case ')': {
					qtde_parenteses--;
					break;
				}
			}
			// Se começa trecho com um ")", sai do laço porque é fórmula mal estruturada
			if (qtde_parenteses < 0) {
				break;
			}
		}
		if (qtde_parenteses == 0) {
			printf("correct\n");
		} else {
			printf("incorrect\n");
		}
	}

	return 0;
}

