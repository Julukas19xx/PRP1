/* Datei: main.c */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	//Initialisierung der Variablen.
	int a = 0;
	int b = 0;
	/*
	Ausgabe der Textzeilen. Für %d wird der entsprechende Dezimalwert in den String eingesetzt.
	Die Rechnung passiert in dem printf()-Befehl.
	*/
	printf("Bitte geben Sie den ersten Wert ein: ");
	scanf("%d", &a);
	printf("Bitte geben Sie den zweiten Wert ein: ");
	scanf("%d", &b);
	printf("");
	printf("Die Summe von %d und %d ist: %d\n", a, b, a + b);
	printf("Die Differenz von %d und %d ist: %d\n", a, b, a - b);
	printf("Das Produkt von %d und %d ist: %d\n", a, b, a * b);
	printf("Der Quotient von %d und %d ist: %d\n", a, b, a / b);
	return 0;
}