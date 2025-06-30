#include <stdio.h>
#include <string.h>

#define QTDECARTAS 50

int main() {
	int n;
	int pilha[50], qtde_cartas_pilha;
	int descarte[50], qtde_cartas_descarte;
	int inicio_pilha, fim_pilha;

	scanf("%d", &n);
	while (n != 0) {
		qtde_cartas_pilha = n;
		qtde_cartas_descarte = 0;
		for (int i = 0; i < n; i++) {
			pilha[i] = i + 1;
		}

		inicio_pilha = 0;
		fim_pilha = qtde_cartas_pilha - 1;
		while (qtde_cartas_pilha >= 2) {
			descarte[qtde_cartas_descarte] = pilha[inicio_pilha];
			qtde_cartas_descarte++;
			qtde_cartas_pilha--;
			if (qtde_cartas_pilha > 1) {
				fim_pilha = (fim_pilha + 1) % QTDECARTAS;
				pilha[fim_pilha] = pilha[inicio_pilha + 1];
				inicio_pilha = (inicio_pilha + 2) % QTDECARTAS;
			} else {
				inicio_pilha = (inicio_pilha + 1) % QTDECARTAS;
			}
		}

		printf("Discarded cards: ");
		for (int i = 0; i < qtde_cartas_descarte - 1; i++) {
			printf("%d, ", descarte[i]);
		}
		if (qtde_cartas_descarte > 0) {
			printf("%d", descarte[qtde_cartas_descarte - 1]);
		}

		printf("\nRemaining card: ");
		if (qtde_cartas_pilha > 0) {
			printf("%d", pilha[inicio_pilha]);
		}
		printf("\n");

		scanf("%d", &n);
	}

	return 0;
}

