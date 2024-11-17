#include <stdio.h>

int main() {
	int n, f1, f2, aux;

	scanf("%d", &n);
	for (; n > 0; n--) {
		scanf("%d%d", &f1, &f2);
		// Se f2 > f1, troque os valores
		if (f2 > f1) {
			aux = f1;
			f1 = f2;
			f2 = aux;
		}
		// MDC por Divisões Sucessivas
		do {
			aux = f1 % f2;
			f1 = f2;
			f2 = aux;
		} while (f2 > 1);
		printf("%d\n", f1);
	}
	return 0;
}

