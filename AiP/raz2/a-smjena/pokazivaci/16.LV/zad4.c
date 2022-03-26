#include <stdio.h>

int main()
{
	float a[5], c[5];
	float *p_a = &a[0], *p_c = &c[0];
	int b[5], i, b_i = 0, c_i = 0;
	int *p_b = &b[0];
	for (i = 0; i < 5; i++) {
		printf("Upisi %d. broj u niz: ", i+1);
		scanf("%f", p_a + i);
	}
	for (i = 0; i < 5; i++) {
		if (*(p_a + i) == (int)*(p_a + i)) {
			*(p_b + b_i) = *(p_a + i);
			b_i++;
		} else {
			*(p_c + c_i) = *(p_a + i);
			c_i++;
		}
	}
	printf("Brojevi prvog niza:");
	for (i = 0; i < 5; i++) {
		printf(" %.2f", *(p_a + i));
	}
	printf("\n");
	printf("Brojevi drugog niza:");
	for (i = 0; i < b_i; i++) {
		printf(" %d", *(p_b + i));
	}
	printf("\n");
	printf("Brojevi treceg niza:");
	for (i = 0; i < c_i; i++) {
		printf(" %.2f", *(p_c + i));
	}
	printf("\n");
	return 0;
}
