#include <stdio.h>

int min(int *p_a, int *p_b, int *p_c)
{
	int najm = *p_a;
	if (*p_b < najm) najm = *p_b;
	if (*p_c < najm) najm = *p_c;
	return najm;
}

int main()
{
	int a, b, c;
	printf("Unesi 3 broja: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Najmanji broj: %d\n", min(&a, &b, &c));
	return 0;
}
