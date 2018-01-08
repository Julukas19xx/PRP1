/* Datei: main.c */
#include <stdio.h>

int main(void) {
	//Initialisierung der Variablen.
	int a = 12;
	int b = 6;
	/*
	Ausgabe der Textzeilen. Für %d wird der entsprechende Dezimalwert in den String eingesetzt.
	Die Rechnung passiert in dem printf()-Befehl.
	*/
	printf("Die Summe von %d und %d ist: %d\n", a, b, a + b);
	printf("Die Differenz von %d und %d ist: %d\n", a, b, a - b);
	printf("Das Produkt von %d und %d ist: %d\n", a, b, a * b);
	printf("Der Quotient von %d und %d ist: %d\n", a, b, a / b);
	return 0;
}