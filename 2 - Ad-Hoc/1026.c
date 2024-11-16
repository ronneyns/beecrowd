#include <stdio.h>

int main() {
	long long int A, B;

	while (scanf("%lld %lld", &A, &B) != EOF) {
		printf("%lld\n", A ^ B);
	}

	return 0;
}

