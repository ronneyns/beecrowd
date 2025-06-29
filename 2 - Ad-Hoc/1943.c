#include <stdio.h>

#define QTDE_CATEGORIAS 7

int buscar_categoria(int k, int *categorias) {
	int inicio, fim, meio;

	inicio = 0;
	fim = QTDE_CATEGORIAS - 1;
	while (inicio < fim) {
		meio = (inicio + fim) / 2;
		if (k == categorias[meio]) {
			return meio;
		}
		if (k < categorias[meio]) {
			fim = meio;
		} else {
			inicio = meio + 1;
		}
	}
	return inicio;
}

int main() {
	int categorias[QTDE_CATEGORIAS] = {1, 3, 5, 10, 25, 50, 100};
	int k;

	while (scanf("%d", &k) != EOF) {
		printf("Top %d\n", categorias[buscar_categoria(k, categorias)]);
	}

	return 0;
}

