#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[8], i, j, t;
	FILE *fp;
	for (i = 0; i < 8; i++) {
		printf("Unesi %d. broj: ", i+1);
		scanf("%d", &a[i]);
	}
	fp = fopen("zad2.dat", "w");
	for (i = 0; i < 8; i++) {
		fprintf(fp, "%d\n", a[i]);
	}
	fclose(fp);
	fp = fopen("zad2.dat", "r");
	for (i = 0; i < 8; i++) {
		fscanf(fp, "%d", &a[i]);
	}
	for (i = 0; i < 7; i++) {
		for (j = i+1; j < 8; j++) {
			if (a[i] > a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	printf("Sortirano polje:");
	for (i = 0; i < 8; i++) {
		printf(" %d", a[i]);
	}
	printf("\n");
	fclose(fp);
	return 0;
}
