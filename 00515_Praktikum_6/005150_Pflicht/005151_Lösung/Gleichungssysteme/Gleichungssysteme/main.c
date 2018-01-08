/*
Datei: main.c
Autor: Sascha Jan Schramm
Datum:
Kurzbeschreibung: Berechnung von mehrdimensionalen Matrixen
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//Funktion zur berechnung der Determinante einer Matrix
double determinante(double matrix[3][3], int dimension) {

	//Anlegen der Variable für das Ergebniss
	double result = 0;

	//Feststellen welche Formel verwendet werden soll anhand der gegebenen Dimension der Matrix
	switch (dimension)
	{
	case 1:
		//Berechnen der Determination
		result = matrix[0][0];
		break;
	case 2:
		//Berechnen der Determination
		result = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
		break;
	case 3:
		//Berechnen der Determination
		result = matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] + matrix[0][2] * matrix[1][0] * matrix[2][1] - matrix[2][0] * matrix[1][1] * matrix[0][2] - matrix[2][1] * matrix[1][2] * matrix[0][0] - matrix[2][2] * matrix[1][0] * matrix[0][1];
		break;
	}

	//Zurückgeben des Ergebnisses an die aufrufende Funktion
	return result;
}

void inverse(double matrix[3][3], double inverse_matrix[3][3], int dimension) {
	//Anlegen der Laufvariablen für die for-Schleifen
	int i = 0;
	int j = 0;

	//Berechnen der Determinante unter der zuvor erstellten Funktion
	double determin = determinante(matrix, dimension);

	//Feststellen welche Formel verwendet werden soll anhand der gegebenen Dimension
	switch (dimension)
	{
	case 1:
		//Berechnen des Inversen
		inverse_matrix[0][0] = 1.0f / determin;
		break;
	case 2:
		//Berechnen des Inversen
		inverse_matrix[0][0] = +matrix[1][1] / determin;
		inverse_matrix[0][1] = -matrix[0][1] / determin;
		inverse_matrix[1][1] = +matrix[0][0] / determin;
		inverse_matrix[1][0] = -matrix[1][0] / determin;
		break;
	case 3:
		//Berechnen des Inversen
		inverse_matrix[0][0] = +(matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) / determin;
		inverse_matrix[0][1] = -(matrix[0][1] * matrix[2][2] - matrix[2][1] * matrix[0][2]) / determin;
		inverse_matrix[0][2] = +(matrix[0][1] * matrix[1][2] - matrix[1][1] * matrix[0][2]) / determin;
		inverse_matrix[1][0] = -(matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) / determin;
		inverse_matrix[1][1] = +(matrix[0][0] * matrix[2][2] - matrix[0][2] * matrix[2][0]) / determin;
		inverse_matrix[1][2] = -(matrix[0][0] * matrix[1][2] - matrix[1][0] * matrix[0][2]) / determin;
		inverse_matrix[2][0] = +(matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]) / determin;
		inverse_matrix[2][1] = -(matrix[0][0] * matrix[2][1] - matrix[0][1] * matrix[2][0]) / determin;
		inverse_matrix[2][2] = +(matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]) / determin;
		break;
	}
}

int deter(void) {
	//Laufvariablen für die for-Schleifen
	int i = 0;
	int j = 0;

	//Variable zum temporären zwischenspeichern
	double temp_double = 0;

	//Variable für die Dimension der Matrix
	int size = 0;

	//Variable zum Abspeichern der Matrix
	double matrix[3][3];

	//Anzeigen der Kopfzeile des Programmes
	printf("Programm zur Berechnung der Determinante einer quadratischen Matrix \n");
	printf("\n");

	//Abfragen der Dimesion der Matrix
	while (size <= 0 || size > 3) {
		printf("Bitte Dimension der Matrix eingeben (1, 2 oder 3 Dimensionen)!");
		scanf("%i", &size);
	}
	
	//Abfragen des Inhaltes der Matrix
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("Bitte Element [%i][%i] eingeben!", i+1, j+1);
			scanf("%lf", &temp_double);
			matrix[i][j] = temp_double;
		}
	}

	//Anfang der Anzeige der Matrix und der Determinante
	printf("\n");
	printf("Die Determinante der Matrix\n");
	printf("\n");

	//Anzeigen der Matrix
	for (i = 0; i < size; i++) {
		printf("|");
		for (j = 0; j < size; j++) {
			printf("\t%.2lf", matrix[i][j]);
		}
		printf("|\n");
	}

	//Anzeigen der Determinante
	printf("\n");
	printf("ist %2.lf.\n", determinante(matrix, size));

	return 0;
}

int invert(void) {
	//Laufvariablen für die Schleifen
	int i = 0;
	int j = 0;

	//Variable zum temporären zwischenspeichern
	double temp_double = 0;

	//Variable für die Dimension der Matrix
	int size = 0;

	//Variable zum Abspeichern der Matrix un der inversen Matrix
	double matrix[3][3];
	double inverse_matrix[3][3];

	//Anzeigen der Kopfzeile des Programmes
	printf("Programm zur Berechnung der inversen Matrix \n");
	printf("\n");

	//Abfragen der Dimesion der Matrix
	while (size <= 0 || size > 3) {
		printf("Bitte Dimension der Matrix eingeben (1, 2 oder 3 Dimensionen)!");
		scanf("%i", &size);
	}

	//Abfragen des Inhaltes der Matrix
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("Bitte Element [%i][%i] eingeben!", i + 1, j + 1);
			scanf("%lf", &temp_double);
			matrix[i][j] = temp_double;
		}
	}

	if (determinante(matrix, size) == 0) {
		//Anzeige wenn kein inverses Berechnet werden kann
		//Anfang der Anzeige der Matrix
		printf("\n");
		printf("Die Determinante der Matrix\n");
		printf("\n");

		//Anzeigen der Matrix
		for (i = 0; i < size; i++) {
			printf("|");
			for (j = 0; j < size; j++) {
				printf("\t%2.2lf", matrix[i][j]);
			}
			printf("|\n");
		}

		//Ende der Anzeige
		printf("\n");
		printf("ist 0, die Matrix kann nicht invertiert werden.\n");
	}
	else {
		//Aufrufen der Funktion zum bilden des Inversen 
		inverse(matrix, inverse_matrix, size);

		//Anfang der Anzeige der Matrix und der inversen Matrix
		printf("\n");
		printf("Die Inverse der Matrix\n");
		printf("\n");

		//Anzeigen der Matrix
		for (i = 0; i < size; i++) {
			printf("|");
			for (j = 0; j < size; j++) {
				printf("\t%5.2lf", matrix[i][j]);
			}
			printf("|\n");
		}

		printf("\n");
		printf("ist\n");
		printf("\n");

		//Anzeigen der inversen Matrix
		for (i = 0; i < size; i++) {
			printf("|");
			for (j = 0; j < size; j++) {
				printf("\t%5.2lf", inverse_matrix[i][j]);
			}
			printf("|\n");
		}
	}

	return 0;
}

int gleichung(void) {
	//Laufvariablen für die Schleifen
	int i = 0;
	int j = 0;

	//Variable zum temporären zwischenspeichern
	double temp_double = 0;

	//Variable für die Dimension der Matrix
	int size = 0;

	//Variable zum Abspeichern der Matrix und der inversen Matrix
	double matrix[3][3];
	double inverse_matrix[3][3];

	//Array zum Abspeichern der Vectoren
	double vector[3] = { 0 };

	//Anzeigen der Kopfzeile des Programmes
	printf("Programm zur L%csung eines linearen Gleichungssystems!\n", 148);
	printf("\n");

	//Abfragen der Dimesion der Matrix
	while (size <= 0 || size > 3) {
		printf("Bitte Dimension des Gleichungssystems eingeben (1, 2 oder 3 Dimensionen)!");
		scanf("%i", &size);
	}

	//Abfragen des Inhaltes der Matrix
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("Bitte Element [%i][%i] des Gleichungssystems eingeben!", i + 1, j + 1);
			scanf("%lf", &temp_double);
			matrix[i][j] = temp_double;
		}
	}

	//Abfragen des inhomogenen Anteils
	for (i = 0; i < size; i++) {
		printf("Bitte Element [%i] des inhomogenen Anteils eingeben!", i + 1);
		scanf("%lf", &temp_double);
		vector[i] = temp_double;
	}

	printf("\n");

	if (determinante(matrix, size) == 0) {
		//Anzeige das die Gleichung nicht gelöst werden kann
		printf("Das Gleichungssystem ist singul%cr und kann nicht eindeutig gel%cst werden!\n", 132, 148);
	}
	else {
		//Anfang der Anzeige der Matrix
		printf("Die L%csung des Gleichungssystems\n", 148);
		printf("\n");

		//Anzeige der Matrix
		for (i = 0; i < size; i++) {
			printf("|");
			for (j = 0; j < size; j++) {
				printf("\t%.2lf", matrix[i][j]);
			}
			printf("|\tx%i\t%.2lf\n", i + 1, vector[i]);
		}

		printf("\n");
		printf("ist\n");
		printf("\n");

		//Aufrufen der Funktion zum bilden des Inversen 
		inverse(matrix, inverse_matrix, size);

		//Berechnung und Anzeige der gelösten Matrix
		for (i = 0; i < size; i++) {
			temp_double = 0;
			for (j = 0; j < size; j++) {
				temp_double += ( inverse_matrix[i][j] * vector[j] );
			}
			printf("x%i=\t%5.2lf\n", i, temp_double);
		}
	}

	return 0;
}

int main(void) {
	//deter();
	//invert();
	gleichung();
	return 0;
}