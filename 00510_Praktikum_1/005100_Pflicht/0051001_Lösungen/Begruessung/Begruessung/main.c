/* Datei: main.c */
#include <stdio.h>

int main(void) {
	printf("Herzlich willkommen!\n");
	/*
	Die Umlaute � und � k�nnen in dieser Form nicht ausgegeben werden.
	Die Zeichen m�ssen Anhand der ASCII-Tabelle in Dezimalform ersetzt werden.
	Dies geschieht durch das einsetzen von %c.
	*/
	//printf("Und tsch��!\n");
	printf("Und tsch%c%c!\n", 129, 225);
	return 0;
}