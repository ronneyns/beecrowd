#include <stdio.h>
 
int main() {
	double PI = 3.14159;
	double raio, area;

	scanf("%lf", &raio);

	area = PI * raio * raio;
	printf("A=%.4f\n", area);

	return 0;
}

