#include <stdio.h>

int main()
{
	float a;
	int cijel, i, count = 0;
	while (1) {
		printf("Unesi realan broj: ");
		scanf("%f", &a);
		if (a != (int)a)
			break;
	}
	cijel = (int)a;
	for (i = 1; i <= cijel; i++) {
		if (cijel % i == 0)
			count++;
	}
	if (count == 2)
		printf("Cijeli dio broja %.2f je prim\n", a);
	else
		printf("Cijeli dio broja %.2f nije prim\n", a);
	return 0;
}
