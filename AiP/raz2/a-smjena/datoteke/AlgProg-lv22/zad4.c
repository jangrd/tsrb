#include <stdio.h>
#include <stdlib.h>

int main()
{
	int izostanci, i, ukupno = 0;
	float avg;
	FILE *fp;
	fp = fopen("zad4.dat", "w");
	for (i = 0; i < 4; i++) {
		printf("Unesi izostanke za 3.%c razred: ", 'a'+i);
		scanf("%d", &izostanci);
		fprintf(fp, "%d\n", izostanci);
	}
	fclose(fp);
	fopen("zad4.dat", "r");
	for (i = 0; i < 4; i++) {
		fscanf(fp, "%d", &izostanci);
		ukupno += izostanci;
	}
	avg = ukupno / 4.0;
	printf("Ukupno izostanaka: %d\n", ukupno);
	printf("Prosjecno izostanaka: %.2f\n", avg);
	rewind(fp);
	printf("Razredi sa manje izostanaka od prosjeka:\n");
	for (i = 0; i < 4; i++) {
		fscanf(fp, "%d", &izostanci);
		if (izostanci < avg) {
			printf(" - 3.%c\n", 'a'+i);
		}
	}
	fclose(fp);
	return 0;
}
