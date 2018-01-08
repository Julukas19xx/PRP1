/*
Datei: main.c
Autor: Sascha Jan Schramm
Datum: 29.11.2017
Kurzbeschreibung: Berechnung des Integral einer Funktion
*/

//Berechnung der Funktion
double f(double x) {
	return 4 - x * x;
}

//Berechnung der Fläche
double flaeche(double von, double bis) {
	/*
	//Herleitung der Funktion. Wurde direkt in aen return-Befehl eingegeben
	//Breite berechnen und in einer Variablen speichern
	double w = bis - von;

	//Höhe berechnen und in einer Variablen speichern
	double h = f(w / 2 + von);

	//Fläche berechnen und an das Programm zurückgeben
	return w * h;*/

	//Verkürzte Ausgabeform
	return (bis - von) * f((bis - von) / 2 + von);
}

//Berechnen des Integrals
double integral(double von, double bis, int anzahl) {
	//Initialisierung der Laufvariable
	int i = 0;
	//Initialisierung der Variable fürs Ergebniss
	double result = 0.0;
	//Initialisierung der Variable für die Schrittgröße
	double step = (bis - von) / anzahl;
	
	//Berechnung der Fläche für jedes Teilstück des Graphens
	for (i; i < anzahl; i++) {
		result = result + flaeche(step * i, step * (i + 1));
	}

	//Ausgabe des Ergebnisses
	return result;
}

double integral_trapez(double von, double bis, int n) {
	//Initialiserung der benötigten Variablen
	int k = 0;
	double result = 0.0;
	double sum = 0.0;
	double h = (bis - von) / n;

	//Berechnung der Summe
	for (k = 1; k < n; k++) {
		sum = sum + f(von + k * h);
	}

	//Berechnung der restlichen Formel
	result = (h / 2) * (f(von) + f(bis) + 2 * sum);

	//Rückgabe des Ergebnisses zurück an das Programm
	return result;
}

#include <stdio.h>

int main(void) {
	//Ausgabe der errechneten Flächen. Um weniger Speicher zu nutzen werden die Funktionen direkt im printf()-Befehl aufgerufen.
	printf("Rechteckfl%cche von 0 bis 1: %f\n", 132, flaeche(0.0, 1.0));
	printf("Rechteckfl%cche von 0 bis 5 in 5 Schritten: %f\n", 132, integral(0.0, 5.0, 5));
	printf("Trapetzfl%cche von 0 bis 5 in 5 Schritten: %f\n", 132, integral_trapez(0.0, 5.0, 5));
	return 0;
}
