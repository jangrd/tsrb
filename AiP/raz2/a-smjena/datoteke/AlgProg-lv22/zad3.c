#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ime[16], prezime[16];
	int visina, i;
	float avg = 0;
	FILE *fp;
	fp = fopen("zad3.dat", "w");
	for (i = 0; i < 5; i++) {
		printf("Unesi ime, prezime, visinu %d. ucenika: ", i+1);
		scanf("%s %s %d", ime, prezime, &visina);
		fprintf(fp, "%s %s %d\n", ime, prezime, visina);
	}
	fclose(fp);
	fp = fopen("zad3.dat", "r");
	for (i = 0; i < 5; i++) {
		fscanf(fp, "%s %s %d", ime, prezime, &visina);
		avg += visina;
	}
	avg /= 5;
	rewind(fp);
	printf("Visi od prosjeka:\n");
	for (i = 0; i < 5; i++) {
		fscanf(fp, "%s %s %d", ime, prezime, &visina);
		if (visina > avg) {
			printf(" - %s %s\n", ime, prezime);
		}
	}
	fclose(fp);
	return 0;
}
