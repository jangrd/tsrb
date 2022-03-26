#include <stdio.h>

void funkcija(int *ptr)
{
	int s = *ptr / 100;
	int d = *ptr % 100 / 10;
	int j = *ptr % 10;
	int zbr = s + d + j;
	printf("Zbroj znamenki je %d i to je ", zbr);
	if (zbr % 2 == 0)
		printf("paran broj\n");
	else
		printf("neparan broj\n");
		
}

int main()
{
	int a;
	printf("Unesi broj: ");
	scanf("%d", &a);
	funkcija(&a);
	return 0;
}
