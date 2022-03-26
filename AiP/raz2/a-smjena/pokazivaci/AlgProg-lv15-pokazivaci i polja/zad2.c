#include <stdio.h>

int main()
{
	int a[4], i;
	int *p_a = &a[0];
	for (i = 0; i < 4; i++) {
		printf("Unesi %d. broj: ", i+1);
		scanf("%d", p_a + i);
	}
	int zbr = 0, umn = 1;
	for (i = 0; i < 4; i++) {
		zbr += *(p_a + i);
		umn *= *(p_a + i);
	}
	float sredina = zbr / 4.0;
	printf("Umnozak: %d\n", umn);
	printf("Aritmeticka sredina: %.2f\n", sredina);
	return 0;
}
