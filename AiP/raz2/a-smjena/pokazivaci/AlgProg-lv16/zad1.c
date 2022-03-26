#include <stdio.h>

int umnozak(int *ptr)
{
	int d = *ptr / 10;
	int j = *ptr % 10;
	return d * j;
}

int main()
{
	int a;
	printf("Unesi broj: ");
	scanf("%d", &a);
	printf("Umnozak znamenki: %d\n", umnozak(&a));
	return 0;
}
