#include <stdio.h>

float sredina(int *p_zbr, int *p_count)
{
	return (float)*p_zbr / *p_count;
}

int main()
{
	int a, zbr = 0, count = 0;
	while (1) {
		printf("Unesi broj: ");
		scanf("%d", &a);
		if (a == 5)
			break;
		zbr += a;
		count++;
	}
	if (count == 0)
		printf("Uneseno 0 brojeva\n");
	else
		printf("Uneseno: %d\nSredina: %.2f\n", count, sredina(&zbr, &count));
	return 0;
}
