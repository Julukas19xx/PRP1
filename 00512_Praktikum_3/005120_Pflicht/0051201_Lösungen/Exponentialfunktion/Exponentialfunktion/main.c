/*
Datei: main.c
Autor: Sascha Jan Schramm
Datum: 24.10.2017
Kurzbeschreibung: Berechnung einer Exponentialfunktion
*/

//Abschalten der Fehlermeldung 4996
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double exponent (double basis, int index) {
	if (index == 0) {
		return 1.0;
	}
	else {
		double result1 = 1.0;
		int j = 0;
		for (j; j < index; j++) {
			result1 = result1 * basis;
		}
		return result1;
	}
}

double faculty(double n) {
	if (n == 0) {
		return 1.0;
	}
	else {
		double result1 = 1.0;
		double j = 1.0;
		for (j; j <= n; j++) {
			result1 = result1 * j;
		}
		return result1;
	}	
}

int main(void) {
	double i = 0.0;
	double x = 10.0;
	double basis = 0.0;
	double result = 0.0;
	double result_old = 0.0;
	int count = 0;
	while (1 == 1) {
		basis = 0.0;
		result = 0.0;
		result_old = 0.0;
		count = 0;
		printf("Bitte geben sie eine Zahl ein!\n");
		scanf("%lf", &basis);
		if (basis == 0) {
			break;
		}
		/*
		for (i; i <= x; i++) {
			result = exponent(basis, i) / faculty(i) + result;
		}
		*/
		while (1 == 1) {
			result = exponent(basis, count) / faculty(count) + result;
			if (result == result_old) {
				break;
			}
			else {
				result_old = result;
			}
			count++;
		}
		printf("Ergebniss: %f\n", result);
		printf("Differnez: %f%%\n", (100 / result * exp(basis) - 100));
		printf("Anzahl der Summanden: %d\n\n", count);
	}
	return 0;
}