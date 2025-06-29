#include <stdio.h>

int main() {
	int qtde_participantes = 5;
	int tipo_cha;
	int avaliacao_participante;
	int qtde_acertos;

	while (scanf("%d", &tipo_cha) != EOF) {
		qtde_acertos = 0;
		for (int i = 0; i < qtde_participantes; i++) {
			scanf("%d", &avaliacao_participante);
			if (avaliacao_participante == tipo_cha) {
				qtde_acertos++;
			}
		}
		printf("%d\n", qtde_acertos);
	}
	return 0;
}

