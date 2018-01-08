#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int i = 0;
	int buf = 0;
	for (i = 0; i <= 255; i++) {
		printf("%i: %c\n", i, i);
	}
	while (1) {
		i = 0;
		printf("\nEingabe: ");
		scanf("%c", &i);
		printf("ASCII: %i\n", i);
		if (i != 10) {
			while (buf != 10) {
				scanf("%c", &buf);
			}
			buf = 0;
		}
	}
	
	return 0;
}