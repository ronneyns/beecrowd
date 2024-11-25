#include <stdio.h>

int main() {
	int m, n, aux;
	unsigned long long int fat_m, fat_n;

	while (scanf("%d%d", &m, &n) != EOF) {
		if (m > n) {
			aux = n;
			n = m;
			m = aux;
		}
		fat_m = 1;
		for (int i = 2; i <= m; i++) {
			fat_m *= i;
		}
		fat_n = fat_m;
		for (int i = m + 1; i <= n; i++) {
			fat_m *= i;
		}
		printf("%lld", fat_m + fat_n);
	}

	return 0;
}

