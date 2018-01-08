/* Datei: main.c */
#include <stdio.h>

int main(void) {
	/*
	Ausgabe des Textes in der Konsole
	Umlaute und Sonderzeichen werden entsprechend der ASCII-Tabelle in Dezimalerform durch %c ersetzt.
	*/
	printf("Laut dem %cTIOBE-Sprach-Index%c aus dem Juli 2011\n", 34, 34);
	printf("ist C immer noch die zweith%cufigste Programmiersprache\n", 132);
	printf("mit einem Prozentsatz von %cber 17%c. Dabei ist die\n", 129, 37);
	printf("Tendenz allerdings leicht r%cckl%cufig.\n", 129,132);
	return 0;
}