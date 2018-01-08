/*
Datei: main.c
Autor: Sascha Jan Schramm
Datum: 24.10.2017
Kurzbeschreibung: Ausgabe der Wurzeln
*/

#include <stdio.h>
#include <math.h>

int main(void) {
	//Initialisierung der Variablen
	int i = 0;
	float number[] = { 4, 12.25, 0.01234 };
	//Erzeugen der Textausgabe
	printf("ZAHL%c%cWURZEL\n\n", 9, 9);
	for (i; i < sizeof(number) / sizeof(float); i++) {
		printf("%8.5f%c%8.5f\n", number[i], 9, sqrt(number[i]));
	}
	return 0;
}