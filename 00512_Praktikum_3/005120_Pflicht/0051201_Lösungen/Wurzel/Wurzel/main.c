/*
Datei: main.c
Autor: Sascha Jan Schramm
Datum: 13.11.2017
Kurzbeschreibung: Berechnung der Wurzel ohne die nutzung von math.h
*/

//Abschalten der Fehlermeldung 4996
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int i = 0;
	int x = 10;
	int square = 0;
	double result = 1.0;
	int scion = 0;
	printf("Bitte Zahl eingeben, deren Wurzel berechnet werden soll!\n");
	scanf("%d", &square);
	printf("Bitte Anzahl der g%cltigen Stellen hinter dem Komma eingeben!\n", 129);
	scanf("%d", &scion);
	for (i; i <= x; i++) {
		result = 0.5 * (result + (square / result));
	}
	printf("Die Wurzel von %d ergibt %.*f.\n", square, scion, result);
	return 0;
}
