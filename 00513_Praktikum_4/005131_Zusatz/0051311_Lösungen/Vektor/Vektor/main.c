/*
Datei: main.c
Autor: Sascha Jan Schramm
Datum:
Kurzbeschreibung:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double skalarprodukt(double * vektor1, double * vektor2, int dim) {
	int i = 0;

	double result = 0;

	for (i = 0; i < dim; i++) {
		result += vektor1[i] * vektor2[i];
	}

	return result;
}

double abstand(double * vektor1, double * vektor2, int dim) {
	int i = 0;

	double result = 0;

	for (i = 0; i < dim; i++) {
		result += sqrt((vektor1[i] - vektor2[i]) * (vektor1[i] - vektor2[i]));
	}

	return result;
}

int main(void) {
	int i = 0;
	int j = 0;

	double temp_double = 0;

	double vektor1[3];
	double vektor2[3];
	int dim = 0;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("Geben sie den %i. Werten für den %i. Vektor ein: ", j + 1, i + 1);
			scanf("%lf", &temp_double);
			if (i == 0) {
				vektor1[j] = temp_double;
			}
			else {
				vektor2[j] = temp_double;
			}
		}
	}

	printf("Das Skalarprodukt ist %.3lf\n", skalarprodukt(&vektor1[0], &vektor2[0], 3));
	printf("Der Abstand ist %.3lf\n", abstand(&vektor1[0], &vektor2[0], 3));
	return 0;
}