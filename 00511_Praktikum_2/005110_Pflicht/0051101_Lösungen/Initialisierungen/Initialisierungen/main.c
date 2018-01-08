/*
Datei: main.c
Autor: Sascha Jan Schramm
Datum: 24.10.2017
Kurzbeschreibung: Berichtigung der gegebenen Initialisierungen und Ausgabe der Werte
*/

#include <stdio.h>

int main(void) {
	//Gleitkommerzahlen müssen als float initialisiert werden.
	//int a = 2.5;
	float a = 2.5;
	//Zeichen müssen als char initialisiert werden.
	//int b = '&';
	char b = '&';
	char c = '\\';
	//Ganzzahlen müssen als int initialisiert werden.
	//char z = 500;
	int z = 500;
	//long ist nur ein Typ-Modifier. Hierbei handelt es sich nicht um einen eigenen Datentype.
	//long count = 0;
	long int count = 0;
	//short ist nur ein Typ-Modifier. Hierbei handelt es sich nicht um einen eigenen Datentype.
	//short big = 33333;
	int big = 33333;
	unsigned char ch = '\205';
	//unsigned int kann kein Vorzeichen speichern.
	//unsigned int size = -40000;
	int size = -40000;
	//Variablennamen dürfen kein Leerzeichen enthalten.
	//double first value = 1.23E+5;
	double first_value = 1.23E+5;
	//Variablennamen dürfen keine Umlaute enthalten.
	//float fläche = 99999999.99;
	double flaeche = 99999999.99;

	//Ausgabe der vorher Initialiserten Werte. \n leitet eine neue Zeile ein.
	printf("%f\n", a);
	printf("%c\n", b);
	printf("%c\n", c);
	printf("%d\n", z);
	printf("%d\n", count);
	printf("%d\n", big);
	printf("%c\n", ch);
	printf("%d\n", size);
	printf("%f\n", first_value);
	printf("%f\n", flaeche);
	return 0;
}