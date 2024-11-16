#include <stdio.h>

int main() {
	int N, F1, F2, aux;

	scanf("%d", &N);
	for (; N > 0; N--) {
		scanf("%d%d", &F1, &F2);
		// Se F2 > f1, troque os valores
		if (F2 > F1) {
			aux = F1;
			F1 = F2;
			F2 = aux;
		}
		// MDC
		do {
			aux = F1 % F2;
			F1 = F2;
			F2 = aux;
		} while (F2 > 1);
		printf("%d\n", F1);
	}
	return 0;
}

