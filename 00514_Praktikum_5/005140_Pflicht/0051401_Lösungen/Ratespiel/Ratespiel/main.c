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
	//Anlegen einer Puffervariablen. Wird zum entleeren des Datenspeichers der Tastatur benutzt.
	int buf = 0;
	//Abspeichern des "erratenen" Wertes
	int value = 0;
	//Variable zum abspeichern des Eingegebenen Wertes
	//Variable ist als int Initialisiert aufgrund der besseren vergleichbarkeit
	int tip = 0;

	//Ausgabe des Kopfes f�r das Spiel
	printf("Ratespiel\n");
	printf("---------\n");
	printf("\n");

	//Endlosschleife f�r das Spiel, wird durch break-Befehl (Zeile 127) beendet
	while (1) {
		//Laufvariable f�r die Anzahl der Runden
		int counter = 0;
		//Grenzwert der zu erratenen Zahl
		int small = 1;
		int big = 1001;

		printf("Das Spiel beginnt - denken Sie sich eine Zahl zwischen 1 und 1000 aus!\n");
		printf("\n");

		//Endlosschleife f�r einen Spieldurchgang. Wird beendet wenn die Zahl erraten wurde.
		while (1) {
			
			//Bilden des Mittelwertes zur abfrage
			value = small + (big - small) / 2;

			//Ausgabe des Versuches
			printf("%d. Versuch:\n", counter + 1);
			printf("-----------\n");
			printf("Ist die ausgedachte Zahl [k]: %d?\n", value);
			printf("Wenn nicht, ist die ausgedachte Zahl h%cher [h] oder niedriger [n]?\n", 148);
			printf("\n");

			//Endlosschleife f�r die Eingabe. Wird beendet, wenn es eine g�ltige Eingabe gibt.
			while (1) {

				//Einlesen der Eingabe
				printf("Eingabe: ");
				//Einlesen der Eingabe als char in die int Variable
				//Achtung!!!! An dieser Stelle wird der Kompiler belogen
				scanf("%c", &tip);
				//Funktion zum entleeren des Tastaturspeichers. Die Abbruchbedingung ist der newline-Befehl.
				while (buf != 10) {
					//Achtung!!!! An dieser Stelle wird der Kompiler belogen
					scanf("%c", &buf);
				}
				//Zur�cksetzen des Puffers
				buf = 0;
				printf("\n");

				//Vergleichen ob eine g�ltige Eingabe vorliegt. Hierf�r wird die Eingabe mit den g�ltigen ASCII-Werten verglichen
				if ((tip == 104) || (tip == 107) || (tip == 110)) {
					break; 
				}
			}

			//Auswertung der Eingabe
			//Zahl ist h�her
			if (tip == 104) {
				//value wird unterer Grenzwert
				small = value;
			}
			//Zahl ist niedriger
			else if (tip == 110) {
				//value wird oberer Grenzwert
				big = value;
			}
			//Zahl wurde erraten
			else if (tip == 107) {
				//Endlosschleife f�r das Spiel wird beendet
				break;
			}

			//Laufvariable um 1 erh�hen
			counter++;
		}

		//Anzeigen des Spielendes
		printf("Spielende!\n");
		printf("----------\n");
		printf("\n");

		//Abfrage ob noch eine Runde gespielt werden will
		printf("M%cchten Sie eine weitere Runde spielen [0=nein, 1=ja]?\n", 148);
		printf("\n");

		//Endlosschliefe f�r die Abfrage ob noch eine Runde gespielt werden will
		while (1) {
			//Abfrage der Eingabe
			printf("Eingabe: ");
			scanf("%d", &tip);
			//Funktion zum entleeren des Tastaturspeichers. Die Abbruchbedingung ist der newline-Befehl.
			while (buf != 10) {
				//Achtung!!!! An dieser Stelle wird der Kompiler belogen
				scanf("%c", &buf);
			}
			//Zur�cksetzen des Puffers
			buf = 0;
			printf("\n");

			//Beenden der Endlosschleife bei g�ltiger eingabe von 0 oder 1
			if ((tip == 0) || (tip == 1)) {
				break;
			}
		}

		//Verhalten bei der Eingabe der 0
		if (tip == 0) {
			//Programm wird beendet
			break;
		}
	}

	//Ausgabe des Programmendes
	printf("Das Programm wird beendet\n");
	return 0;
}
