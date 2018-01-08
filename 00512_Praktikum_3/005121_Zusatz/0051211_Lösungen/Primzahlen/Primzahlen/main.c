/*
Datei: main.c
Autor: Sascha Jan Schramm
Datum:
Kurzbeschreibung: Anzeigen von Primzahlen
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int i = 0;
	long result = 0;
	double value = 0.0;
	printf("Geben sie bitte die Zahl ein von der Sie die Primzahl haben wollen: ");
	scanf("%lf", &value);
		if (value <= 0 || value != (int)value) {
			printf("Bei der eingegebenen Zahl handelt es sich nicht um eine nat%crliche, gerade Zahl.\n", 129);
		}
		else {
			for (i = 2; i < value; i++) {
				if ((int)value % i == 0) {
					result = 1;
					break;
				}
			}
			if (value == 2) {
				printf("Die eingegebene Zahl ist eine Primzahl.\n");
			}
			else if (value == 1) {
				printf("Die eingegebene Zahl ist keine Primzahl.\n");
			}
			else if (result == 0) {
				printf("Die eingegebene Zahl ist eine Primzahl.\n");
			}
			else if (result == 1) {
				printf("Die eingegebene Zahl ist keine Primzahl.\n");
			}
		}
	return 0;
}