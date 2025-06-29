#include <stdio.h>

int main() {
	int qtde_pessoas_3o_link;

	while (scanf("%d", &qtde_pessoas_3o_link) != EOF) {
		printf("%d\n", qtde_pessoas_3o_link * 4);
	}

	return 0;
}

