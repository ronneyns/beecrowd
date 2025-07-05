#include <stdio.h>
#include <math.h>

int main() {
	const double PI = 3.14159265358979323846;

	int a, b, c;
	double semiperimetro, area_triangulo;
	double raio_circ_grande, area_circ_grande;
	double raio_circ_pequeno, area_circ_pequeno;

	while (scanf("%d%d%d", &a, &b, &c) != EOF) {
		// Semiperímetro do trângulo
		semiperimetro = (double) (a + b + c) / 2;

		// Área do triângulo (Fórmula de Heron)
		// https://www.youtube.com/watch?v=kXyF_fdQEd0
		area_triangulo = sqrt(semiperimetro * (semiperimetro - a) * (semiperimetro - b) * (semiperimetro - c));

		// Área do triângulo pelo círculo inscrito
		// https://www.youtube.com/watch?v=OV0nydAi7fw
		raio_circ_pequeno = area_triangulo / semiperimetro;
		area_circ_pequeno = PI * pow(raio_circ_pequeno, 2);

		// Área do triângulo inscrito numa circunferência
		// https://www.youtube.com/watch?v=8Nyy1b9qu00
		raio_circ_grande = (a * b * c) / (4 * area_triangulo);
		area_circ_grande = PI * pow(raio_circ_grande, 2);

		// Ajuste nas áreas "externas" em função das "internas"
		area_circ_grande -= area_triangulo;
		area_triangulo -= area_circ_pequeno;
		printf("%.4f %.4f %.4f\n", area_circ_grande, area_triangulo, area_circ_pequeno);
	}

	return 0;
}

