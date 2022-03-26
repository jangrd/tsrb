#include <stdio.h>

int main()
{
	int a, s, d, j, zbr = 0, count = 0;
	while (1) {
		printf("Upisi broj: ");
		scanf("%d", &a);
		if (a < 100 || a > 999)
			break;
		s = a / 100;
		d = a % 100 / 10;
		j = a % 10;
		if (s % 2 == 1) {
			zbr += s;
			count++;
		}
		if (d % 2 == 1) {
			zbr += d;
			count++;
		}
		if (j % 2 == 1) {
			zbr += j;
			count++;
		}
		if (count == 0)
			printf("Broj nema nepranih znamenki\n");
		else
			printf("Srednja vrijednost neparnih znamenki: %.2f\n", (float)zbr / count);
		zbr = 0; count = 0;
	}
	printf("Niste upisali troznamenkast broj\n");
	return 0;
}
