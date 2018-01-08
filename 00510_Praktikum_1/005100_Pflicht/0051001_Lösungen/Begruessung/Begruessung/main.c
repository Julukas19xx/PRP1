/* Datei: main.c */
#include <stdio.h>

int main(void) {
	printf("Herzlich willkommen!\n");
	/*
	Die Umlaute ü und ß können in dieser Form nicht ausgegeben werden.
	Die Zeichen müssen Anhand der ASCII-Tabelle in Dezimalform ersetzt werden.
	Dies geschieht durch das einsetzen von %c.
	*/
	//printf("Und tschüß!\n");
	printf("Und tsch%c%c!\n", 129, 225);
	return 0;
}