#include <stdio.h>
#include <string.h>

#define TAM_VETOR 10000

int avaliar(int n, int k) {
	int pessoas[TAM_VETOR];
	int pos, qtde, pulo;

	for (int i = 0; i < n; i++) {
		pessoas[i] = i + 1;
	}

	pos = 0;
	while (n > 1) {
		pos = (pos + k - 1) % n;
		for (int i = pos; i < n; i++) {
			pessoas[i] = pessoas[i + 1];
		}
		n--;
	}
	return pessoas[0];
}

int main() {
	int nc, n, k;

	scanf("%d", &nc);
	for (int c = 0; c < nc; c++) {
		scanf("%d%d", &n, &k);
		printf("Case %d: %d\n", c + 1, avaliar(n, k));
	}
	return 0;
}

