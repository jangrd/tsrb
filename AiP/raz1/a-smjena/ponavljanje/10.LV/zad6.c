#include <stdio.h>

int main()
{
	int i, d, j;
	printf("Brojevi sa pranim umnoskom znamenki:");
	for (i = 30; i <= 40; i += 2) {
		d = i / 10;
		j = i % 10;
		if (d * j % 2 == 0)
			printf(" %d", i);
	}
	printf("\n");
	return 0;
}
