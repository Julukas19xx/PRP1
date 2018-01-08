/*
Datei: main.c
Autor: Sascha Jan Schramm
Datum: 28.11.2017
Kurzbeschreibung: Abfrage und Ausgabe von 10 Zahlen
*/

//Abschalten der Fehlermeldung 4996
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//Funktion zum Tauschen des Inhaltes von zwei Pointern
void tausche(int * a, int * b) {
	int temp_pointer = *a;
	*a = *b;
	*b = temp_pointer;
}

int main(void) {
	//Laufvariablen für die for-Schleifen
	int i = 0;
	int j = 0;
	//Array zum abspeichern der Zahlen
	int row[10];
	//Variable zum temporären zwischenspeichern von Werten
	int temp = 0;

	//Abfrage der 10 Ziffern vom Benutzer
	for (i = 0; i < 10; i++) {
		printf("Geben Sie die %d.te Zahl ein:", i+1);
		scanf("%d", &row[i]);
	}
	
	//Ausgabe des Arrays
	for (i = 0; i < 10; i++) {
		printf("%d ", row[i]);
	}
	printf("\n");

	//Verschieben der Ziffern nach vorne
	temp = row[0];
	for (i = 0; i < 9; i++) {
		row[i] = row[i + 1];
	}
	row[9] = temp;
	
	//Ausgabe des Arrays
	printf("Nach vorne verschieben:\n");
	for (i = 0; i < 10; i++) {
		printf("%d ", row[i]);
	}
	printf("\n");

	//Verschieben der Ziffern nach hinten
	temp = row[9];
	for (i = 9; i > 0; i--) {
		row[i] = row[i - 1];
	}
	row[0] = temp;

	//Ausgabe des Arrays
	printf("Nach hinten verschieben:\n");
	for (i = 0; i < 10; i++) {
		printf("%d ", row[i]);
	}
	printf("\n");

	//Vertauschen der zeiten und neunten Ziffer des Arrays unter verwendung der Funktion tausche()
	tausche(&row[1], &row[8]);

	//Ausgabe des Arrays
	printf("Tausche zweite und neunte Zahl:\n");
	for (i = 0; i < 10; i++) {
		printf("%d ", row[i]);
	}
	printf("\n");

	//Tausche der unsortierten Zahlennachbarn
	for (i = 0; i < 9; i++) {
		if (row[i] > row[i + 1]) {
			tausche(&row[i], &row[i + 1]);
		}
	}

	//Ausgabe des Arrays
	printf("Tausche unsortierte Zahlennachbarn:\n");
	for (i = 0; i < 10; i++) {
		printf("%d ", row[i]);
	}
	printf("\n");

	//9mal tauschen der unsortierten Zahlennachbarn
	for (j = 0; j < 10; j++) {
		for (i = 0; i < 9; i++) {
			if (row[i] > row[i + 1]) {
				tausche(&row[i], &row[i + 1]);
			}
		}
	}

	//Ausgabe des Arrays
	printf("Tausche 9mal unsortierte Zahlennachbarn:\n");
	for (i = 0; i < 10; i++) {
		printf("%d ", row[i]);
	}
	printf("\n");
	return 0;
}