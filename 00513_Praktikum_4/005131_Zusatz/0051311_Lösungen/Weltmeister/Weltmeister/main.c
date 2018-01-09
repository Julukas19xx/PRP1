/*
Datei: main.c
Autor: Sascha Jan Schramm
Datum:
Kurzbeschreibung:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	double year = 0.0;
	int check = 0;

	do {
		printf("Bitte geben Sie eine Jahr ein: ");
		check = scanf("%lf", &year);
	} while (check == 0 || year != (int)year);
	
	if (year == 1958 || year == 1962 || year == 1970 || year == 1994 || year == 2002) {
		printf("Brasilien war %i Weltmeister.\n", (int)year);
	}
	else if (year == 1954 || year == 1974 || year == 1990 || year == 2014) {
		printf("Deutschland war %i Weltmeister.\n", (int)year);
	}
	else if (year == 1934 || year == 1938 || year == 1982 || year == 2006) {
		printf("Italien war %i Weltmeister.\n", (int)year);
	}
	else if (year == 1978 || year == 1986) {
		printf("Argentinien war %i Weltmeister.\n", (int)year);
	}
	else if (year == 1930 || year == 1950) {
		printf("Uruguay war %i Weltmeister.\n", (int)year);
	}
	else if (year == 1998) {
		printf("Frankreich war %i Weltmeister.\n", (int)year);
	}
	else if (year == 1966) {
		printf("England war %i Weltmeister.\n", (int)year);
	}
	else if (year == 2010) {
		printf("Spanien war %i Weltmeister.\n", (int)year);
	}
	else {
		printf("In diesem Jahr gab es keinen Weltmeister.");
	}

	return 0;
}