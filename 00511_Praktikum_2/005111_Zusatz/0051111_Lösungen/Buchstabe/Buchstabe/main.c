/*
Datei: main.c
Autor: Sascha Jan Schramm
Datum:
Kurzbeschreibung:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void flashStandardInput(void) {
	int intCharacter;
	while ((intCharacter = getchar()) != '\n' && intCharacter != EOF);
}

int main(void) {
	int check = 0;

	double number = 0.0;

	do {
		printf("Bitte geben Sie eine Zahl ein!\n");
		check = scanf("%lf", &number);
		flashStandardInput();
	} while (check == 0 || number < 1 || number > 26 || number != (int)number);

	printf("\n");
	printf("Der entsprechende Groﬂbuchstabe lautet: %c\n", (char)(number)+64);

	return 0;
}