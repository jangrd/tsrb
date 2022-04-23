#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, bodovi;
	char sifra[8];
	FILE *fp;
	fp = fopen("zad1.dat", "w");
	for (i = 0; i < 6; i++) {
		printf("Unesi sifru i bodove za %d. natjecatelja: ", i+1);
		scanf("%s %d", sifra, &bodovi);
		fprintf(fp, "%s %d\n", sifra, bodovi);
	}
	fclose(fp);
	fp = fopen("zad1.dat", "r");
	printf("Natjecatelji sa vise od 20 bodova:\n");
	for (i = 0; i < 6; i++) {
		fscanf(fp, "%s %d", sifra, &bodovi);
		if (bodovi > 20) {
			printf(" - %s %d\n", sifra, bodovi);
		}
	}
	fclose(fp);
	return 0;
}
