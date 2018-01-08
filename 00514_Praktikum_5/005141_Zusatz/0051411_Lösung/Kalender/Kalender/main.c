/*
Datei: main.c
Autor: Sascha Jan Schramm
Datum:
Kurzbeschreibung:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void month_print(int number_of_month) {
	int i = 0;
	char month_name[12][20] = { "Januar", "Februar",{ 77, 132, 114, 122 }, "April", "Mai", "Juni", "Juli", "August", "September", "Oktober", "November", "Dezember" };

	for (i = 0; i < 20; i++) {
		if (month_name[number_of_month][i] == 0) {
			break;
		}
		printf("%c", (char)month_name[number_of_month][i]);
	}
}

int main(void) {
	//Laufvariable für die Zählschleifen
	int i = 0;
	int j = 0;

	//Variable für die sichere Abfrage
	int check = 0;

	//Variablen für das Jahr und den ersten Tag
	double year = 0.0;
	double day = 0.0;
	int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	//Abfrage des Jahres und des ersten Tages
	printf("Geben Sie das Jahr ein :\n");
	do {
		check = scanf("%lf", &year);
	} while (check == 0 || year != (int)year);
	printf("\n");
	printf("Welcher Tag ist der 1. Januar?\n");
	printf("( 1 = Montag, 2 = Dienstag usw.)\n");
	do {
		check = scanf("%lf", &day);
	} while (check == 0 || day < 1 || day > 7 || day != (int)day);

	//Berechnen ob es ein Schaltjahr ist oder nicht
	if ((int)year % 400 == 0) {
		month_day[1] += 1;
	}
	else if ((int)year % 100 == 0) {
		month_day[1] += 0;
	}
	else if ((int)year % 4 == 0) {
		month_day[1] += 1;
	}
	else {
		month_day[1] += 0;
	}

	//Anzeigen des Kalenders
	printf("\n");
	printf("Kalender");
	printf("\n");
	for (i = 0; i < 12; i++) {
		//Anzeige des Monats
		printf("\n");
		printf("Monat ");
		month_print(i);
		printf("\n");
		if (day < 8) {
			for (j = 0; j < day - 1; j++) {
				printf("   ");
			}
		}
		else {
			day = 1;
		}
		
		day--;
		for (j = 1; j <= month_day[i]; j++) {
			if (day > 6) {
				printf("\n");
				day = 0;
			}
			printf("%2.i ", j);
			day++;

		}
		day++;

		printf("\n");
		
	}
	return 0;
}