/*
Datei: main.c
Autor: Sascha Jan Schramm
Datum:
Kurzbeschreibung:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// summiert Arrayelement auf
float summiere(float * array, int anzahl) {
	int i;
	float summe = 0;

	for (i = 0; i < anzahl; i = i + 1) // alle von 0 bis anzahl - 1
		summe = summe + array[i]; // aufsummieren

	return summe;
}

float durchschnitt(float * array, int anzahl) {
	return summiere(&array[0], anzahl) / anzahl;
}

int main(void) {

	float zahlen[4] = { 1.0f, 4.0f, 7.7f, 10.9f }; // Beispiel
	float summe;

	summe = summiere(&zahlen[0], 4); // Adresse vom Anfang und Größe des Arrays

	printf("Die Summe ist %4.2f\n", summe);
	printf("Der Durchschnitt ist %4.2f\n", durchschnitt(&zahlen[0], 4));

	return 0;
}