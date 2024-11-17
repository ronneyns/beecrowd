#include <stdio.h>

// Algoritmo de Euclides (Divisões Sucessivas)
// https://www.youtube.com/watch?v=SyhJFuw2u7c
int mdc(int x, int y) {
	int aux;

	do {
		aux = x % y;
		x = y;
		y = aux;
	} while (y > 1);
	return x;
}

int main() {
	int n, f1, f2;

	scanf("%d", &n);
	for (; n > 0; n--) {
		scanf("%d%d", &f1, &f2);

		if (f2 > f1) {
			printf("%d\n", mdc(f2, f1));
		} else {
			printf("%d\n", mdc(f1, f2));
		}
	}
	return 0;
}

