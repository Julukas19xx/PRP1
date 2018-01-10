/*
Datei: main.c
Autor: Sascha Jan Schramm
Datum:
Kurzbeschreibung:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

const  double PI = 3.142;

void flashStandardInput(void){
	int intCharacter;
	while ((intCharacter = getchar()) != '\n' && intCharacter != EOF);
}

double surface(double radius, double height) {
	return PI * radius * radius + PI * radius * sqrt(radius * radius + height * height);
}


double volume(double radius, double height) {
	return (1.0 / 3.0) * PI * radius * radius * height;
}


int main(void) {
	int check = 0;

	double radius = 0.0;
	double height = 0.0;

	do {
		printf("Bitte geben Sie einen Radius ein:\n");
		check = scanf("%lf", &radius);
		flashStandardInput();
	} while (check == 0);

	do {
		printf("Bitte geben Sie eine H%che ein:\n", 148);
		check = scanf("%lf", &height);
		flashStandardInput();
	} while (check == 0);

	printf("\n");
	printf("Radius\t\t%7.2lf\n", radius);
	printf("H%che\t\t%7.2lf\n", 148, height);
	printf("Oberfl%cche\t%7.2lf\n", 132, surface(radius, height));
	printf("Volumen\t\t%7.2lf\n", volume(radius, height));

	return 0;
}