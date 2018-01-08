/*
Datei: main.c
Autor: Sascha Jan Schramm
Datum: 24.10.2017
Kurzbeschreibung: Berechnung einer Kugel
*/

//Abschalten der Fehlermeldung 4244
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141593

#include <stdio.h>

//Globales definieren von Pi
//const float PI = 3.141593;

/*
//Funktion für die Berechnung der Oberfläche
float surface(float radius) {
	float face = 4 * PI * radius * radius;
	return face;
}

//Funktion für die Berechnung des Volumens
float volume(float radius) {
	float capacity = 4 * PI * radius * radius * radius / 3;
	return capacity;
}
*/

//Funktion für die Berechnung der Oberfläche
float surface(float radius) {
	return 4 * PI * radius * radius;
}

//Funktion für die Berechnung des Volumens
float volume(float radius) { 
	return 4 * PI * radius * radius * radius / 3;
}

int main(void) {
	float radius;
	printf("Kugelberechnung\n\nBitte geben Sie einen Radius ein:\n");
	//Einlesen der Zahl im entsprechenden Format
	scanf("%f", &radius);
	printf("\nRadius\t\t%6.2f\n", radius);
	printf("Oberfl%cche\t%6.2f\n", 132, surface(radius));
	printf("Volumen\t\t%6.2f\n", volume(radius));
	return 0;
}