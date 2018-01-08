/*
Datei: main.c
Autor: Sascha Jan Schramm
Datum: 28.11.2017
Kurzbeschreibung: Der PC soll eine von mir erdachte Zahl erraten
*/

//Abschalten der Fehlermeldung 4996
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	//Initialiserung der benötigten Variablen
	int number, temp, buf = 0, i = 0;

	//Anzeige des Starts des Programmes
	printf("Zahlenumrechner\n");
	printf("\n");

	//Endlosschliefe für die Abfrage der Eingabe vom Benutzer
	while (1) {
		//Anzeige der Abfrage
		printf("Geben Sie bitte eine Zahl zwischen 1 und 3000 ein.\n");
		//Abfrage der Eingabe
		printf("Eingabe: ");
		scanf("%i", &number);
		//Funktion zum entleeren des Tastaturspeichers. Die Abbruchbedingung ist der newline-Befehl.
		while (buf != 10) {
			//Achtung!!!! An dieser Stelle wird der Kompiler belogen
			scanf("%c", &buf);
		}
		//Zurücksetzen des Puffers
		buf = 0;
		printf("\n");

		//Beenden der Endlosschleife bei gültiger zwischen 1 und 3000
		if (number >= 1 && number <= 3000) {
			break;
		}
		printf("Die Eingabe ist leider Ung%cltig!\n", 129);
		printf("\n");
	}

	//Anzeigen der Tausenderstelle
	temp = number / 1000;
	for (i = 0; i < temp; i++) {
		printf("M");
	}
	number = number % 1000;

	//Anzeigen der Hunderterstelle
	temp = number / 100;
	if (temp == 9) {
		printf("CM");
	}
	else if (temp >= 5) {
		printf("D");
		for (i = 0; i < temp - 5; i++) {
			printf("C");
		}
	}
	else if (temp == 4) {
		printf("CD");
	}
	else {
		for (i = 0; i < temp; i++) {
			printf("C");
		}
	}
	number = number % 100;

	//Anzeigen der Zehnerstelle
	temp = number / 10;
	if (temp == 9) {
		printf("XC");
	}
	else if (temp >= 5) {
		printf("L");
		for (i = 0; i < temp - 5; i++) {
			printf("X");
		}
	}
	else if (temp == 4) {
		printf("XL");
	}
	else {
		for (i = 0; i < temp; i++) {
			printf("X");
		}
	}
	number = number % 10;

	//Anzeigen der Einerstelle
	if (number == 9) {
		printf("IX");
	}
	else if (number >= 5) {
		printf("V");
		for (i = 0; i < number - 5; i++) {
			printf("I");
		}
	}
	else if (number == 4) {
		printf("IV");
	}
	else {
		for (i = 0; i < number; i++) {
			printf("I");
		}
	}

	printf("\n");

	return 0;
}