/*
Datei: main.c
Autor: Sascha Jan Schramm
Datum:
Kurzbeschreibung: Programm zur berechnung der Fakultät
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

long factorial (long number) {
	int i = 0;
	long result = 1;
	for (i = 1; i <= number; i++) {
		result *= i;
	}
	return result;
}

int main(void) {
	int i = 0;

	for (i = 1; i <= 10; i++) {
		printf("Die Fakult%ct von %i ist %ld\n", 132, i, factorial((long)i));
	}

	long value = 0;

	printf("Geben Sie bitte einen Wert ein von dem sie die Fakult%ct wissen wollen: ", 132);
	scanf("%ld", (long)&value);
	printf("Fakult%ct: %ld\n", 132, factorial(value));
	return 0;
}