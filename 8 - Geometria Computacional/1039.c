#include <stdio.h>
#include <math.h>

float distancia(int x1, int y1, int x2, int y2) {
	return sqrt(pow((double) x1 - x2, 2) + pow((double) y1 - y2, 2));
}

int main() {
	int r1, x1, y1, r2, x2, y2;
	double d;

	while (scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF) {
		d = distancia(x1, y1, x2, y2);
		if (d + r2 <= r1) {
			printf("RICO\n");
		} else {
		printf("MORTO\n");
		}
	}
	return 0;
}

