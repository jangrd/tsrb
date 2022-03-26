#include <stdio.h>

int main()
{
	float a[5], c[5], t;
	float *p_a = &a[0], *p_c = &c[0];
	int b[5], b_i = 0, c_i = 0, i, j;
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
	for (i = 0; i < b_i-1; i++) {
		for (j = i+1; j < b_i; j++) {
			if (*(p_b + i) > *(p_b + j)) {
				t = *(p_b + i);
				*(p_b + i) = *(p_b + j);
				*(p_b + j) = t;
			}
		}
	}
	for (i = 0; i < c_i-1; i++) {
		for (j = i+1; j < c_i; j++) {
			if (*(p_c + i) < *(p_c + j)) {
				t = *(p_c + i);
				*(p_c + i) = *(p_c + j);
				*(p_c + j) = t;
			}
		}
	}
	printf("Cijeli brojevi sortirani od najmanjeg do najveceg:");
	for (i = 0; i < b_i; i++) {
		printf(" %d", *(p_b + i));
	}
	printf("\n");
	printf("Realni brojevi sortirani od najveceg do najmanjeg:");
	for (i = 0; i < c_i; i++) {
		printf(" %.2f", *(p_c + i));
	}
	printf("\n");
	return 0;
}
