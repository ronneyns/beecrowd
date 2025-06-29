#include <stdio.h>

int isPowerOfTwo(long long int n) {
	return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
	long long int n;

	while (scanf("%lld", &n) != EOF) {
		if (isPowerOfTwo(n)) {
			printf("true\n");
		} else {
			printf("false\n");
		}
	}

	return 0;
}

