/*
Datei: main.c
Autor: Sascha Jan Schramm
Datum: 24.10.2017
Kurzbeschreibung: Ausgabe eines kleinen Buchstabens bei Eingabe eines groﬂen Buchstabens
*/

//Abschalten der Fehlermeldung 4996
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>

int main(void) {
	char value;
	printf("Bitte geben Sie einen gro%cen Buchstaben ein!\n", 225);
	scanf("%c", &value);
	//Durch tolower() wird der Buchstabe in klein dargestellt.
	printf("\n\nkleiner Buchstabe = %c\n", tolower(value));
	return 0;
}